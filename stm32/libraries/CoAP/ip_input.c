/*
 * Copyright (c) 2014 ELL-i co-operative.
 *
 * This file is part of ELL-i software.
 *
 * ELL-i software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ELL-i software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ELL-i software.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * Minimal standalone IPv4
 *
 * @author: Pekka Nikander <pekka.nikander@ell-i.org>  2014
 */

#ifdef EMULATOR
#include <stdio.h>
#define error(...) fprintf(stderr, __VA_ARGS__)
#else
#define error(...)
#endif

#include <ip.h>


struct in_addr ip_local_address = { .s_bytes = { 10, 0, 0, 2 } };

static const struct ip_packet ip_header_mask = { 
    .ip_iph = { 
        .iph = {
            /* First 32-bit word */
            .ip_vhl = -1, // must match
            .ip_tos = 0,  // ignored
            .ip_len = 0,  // ignored
            /* Second 32-bit word */
            .ip_id  = 0,  // ignored
            .ip_off = -1, // must match
            /* Third 32-bit word */
            .ip_ttl = 0,  // ignored
            .ip_p   = 0,  // ignored
            .ip_sum = 0,  // ignored
            /* Fourth and fifth 32-bit words */
            .ip_src = { { 0 } },  // ignored
            .ip_dst = { { 0 } },  // not matched
        }
    }
};

static const struct ip_packet ip_header_data = {
    .ip_iph = { 
        .iph = {
            .ip_vhl = IP_VHL_DEFAULT,
            .ip_tos = 0,  // ignored
            .ip_len = 0,  // ignored
            .ip_id  = 0,  // ignored
            .ip_off = 0,  // must be zero
            .ip_ttl = 0,  // ignored
            .ip_p   = 0,  // ignored
            .ip_sum = 0,  // ignored
            .ip_src = { { 0 } },  // ignored
            .ip_dst = { { 0 } },  // not matched
        }
    }
};

/**
 * XXX
 */
    
# ifndef offsetof
#  define offsetof(st, m) ((uint32_t)(&((st *)0)->m))
# endif

void ip_input(struct ip *const iph) {

    /*
     * Verify the packet format.
     */
    register const uint16_t *const iphps = (uint16_t *)iph;
    register const uint16_t *const iphms = ip_header_mask.ip_iph.iph_shorts; // Header mask
    register const uint16_t *const iphds = ip_header_data.ip_iph.iph_shorts; // Header match

    // VHL & TOS
    const uint32_t vhl_o2 = offsetof(struct ip,ip_vhl)/2;
    if ((iphps[vhl_o2] & iphms[vhl_o2]) != iphds[vhl_o2]) {
        error("Dropping malformatted packet vhl. %04x & %04x != %04x\n",
              iphps[vhl_o2], iphms[vhl_o2], iphds[vhl_o2]);
        return; 
    }

    // Length and ID ignored

    // Offset must be zero
    const uint32_t off_o2 = offsetof(struct ip,ip_off)/2;
    if ((iphps[off_o2] & iphms[off_o2]) != iphds[off_o2]) {
        error("Dropping non-zero offset. %04x & %04x != %04x\n",
              iphps[off_o2], iphms[off_o2], iphds[off_o2]);
        return; // Non-zero offset
    }

    // Check TTL
    //XXX;

    // Verify checksum
    //XXX;

    // Verify destination address.
    register in_addr_t dst = iph->ip_dst.s_addr;
    if (dst != ip_local_address.s_addr) {
        // XXX Reply with ICMP destination unreachable?
        error("Dropping packet with wrong destination address.\n");
        return; // Wrong destiation address -- dropped silently
    }

    /*
     * Swap source and destination address for return packet.
     *
     * If the upper layers need the src/dst information, they 
     * must be written with this swapping in mind.
     */
    iph->ip_dst        = iph->ip_src;
    iph->ip_src.s_addr = dst;

    /*
     * Pass to the upper layer
     */
    struct ip_packet *const ip_packet = (struct ip_packet *)iph;
    switch (iph->ip_p) {
    case IPPROTO_UDP:
        udp_input(&ip_packet->ip_udp);
        return;
    case IPPROTO_ICMP:
        icmp_input(&ip_packet->ip_icmp);
        return;
    default:
        // XXX Reply with a suitable ICMP?
        error("Dropping packet with unknown protocol %d.\n", iph->ip_p);
        return; // Unknown protocol -- dropped silently
    }
}
