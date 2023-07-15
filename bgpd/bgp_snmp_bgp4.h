/* BGP4-MIB SNMP support
 *
 * Using: http://www.circitor.fr/Mibs/Html/B/BGP4-MIB.php
 *
 * Copyright (C) 2022 Donatas Abraitis <donatas@opensourcerouting.org>
 *
 * This file is part of FRRouting (FRR).
 *
 * FRR is free software; you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2, or (at your option) any later version.
 *
 * FRR is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; see the file COPYING; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef _FRR_BGP_SNMP_BGP4_H_
#define _FRR_BGP_SNMP_BGP4_H_

#define BGPVERSION 0
#define BGPLOCALAS 0
#define BGPIDENTIFIER 0

/* bgp */
#define BGP4MIB 1, 3, 6, 1, 2, 1, 15

/* bgpTraps */
#define BGPESTABLISHED 1
#define BGPBACKWARDTRANSITION 2

/* bgpPeerTable */
#define BGPPEERIDENTIFIER 1
#define BGPPEERSTATE 2
#define BGPPEERADMINSTATUS 3
#define BGPPEERNEGOTIATEDVERSION 4
#define BGPPEERLOCALADDR 5
#define BGPPEERLOCALPORT 6
#define BGPPEERREMOTEADDR 7
#define BGPPEERREMOTEPORT 8
#define BGPPEERREMOTEAS 9
#define BGPPEERINUPDATES 10
#define BGPPEEROUTUPDATES 11
#define BGPPEERINTOTALMESSAGES 12
#define BGPPEEROUTTOTALMESSAGES 13
#define BGPPEERLASTERROR 14
#define BGPPEERFSMESTABLISHEDTRANSITIONS 15
#define BGPPEERFSMESTABLISHEDTIME 16
#define BGPPEERCONNECTRETRYINTERVAL 17
#define BGPPEERHOLDTIME 18
#define BGPPEERKEEPALIVE 19
#define BGPPEERHOLDTIMECONFIGURED 20
#define BGPPEERKEEPALIVECONFIGURED 21
#define BGPPEERMINROUTEADVERTISEMENTINTERVAL 22
#define BGPPEERINUPDATEELAPSEDTIME 23

/* bgpPathAttrEntry */
#define BGPPATHATTRPEER 1
#define BGPPATHATTRDESTNETWORK 2
#define BGPPATHATTRORIGIN 3
#define BGPPATHATTRASPATH 4
#define BGPPATHATTRNEXTHOP 5
#define BGPPATHATTRINTERASMETRIC 6

/* bgp4PathAttrEntry */
#define BGP4PATHATTRPEER 1
#define BGP4PATHATTRIPADDRPREFIXLEN 2
#define BGP4PATHATTRIPADDRPREFIX 3
#define BGP4PATHATTRORIGIN 4
#define BGP4PATHATTRASPATHSEGMENT 5
#define BGP4PATHATTRNEXTHOP 6
#define BGP4PATHATTRMULTIEXITDISC 7
#define BGP4PATHATTRLOCALPREF 8
#define BGP4PATHATTRATOMICAGGREGATE 9
#define BGP4PATHATTRAGGREGATORAS 10
#define BGP4PATHATTRAGGREGATORADDR 11
#define BGP4PATHATTRCALCLOCALPREF 12
#define BGP4PATHATTRBEST 13
#define BGP4PATHATTRUNKNOWN 14

extern int bgpTrapEstablished(struct peer *peer);
extern int bgpTrapBackwardTransition(struct peer *peer);
extern int bgp_snmp_bgp4_init(struct thread_master *tm);

#endif /* _FRR_BGP_SNMP_BGP4_H_ */
