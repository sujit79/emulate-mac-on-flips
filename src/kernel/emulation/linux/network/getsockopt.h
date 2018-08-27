#ifndef LINUX_GETSOCKOPT_H
#define LINUX_GETSOCKOPT_H

long sys_getsockopt(int fd, int level, int optname, void* optval, int* optlen);

#define LINUX_SYS_GETSOCKOPT	15

#define LINUX_SOL_SOCKET	1
#define BSD_SOL_SOCKET		0xffff

#define IPPROTO_IP		0
#define IPPROTO_TCP		6
#define IPPROTO_IPV6	41

enum
{
	LINUX_SO_DEBUG = 1,
	LINUX_SO_REUSEADDR,
	LINUX_SO_TYPE,
	LINUX_SO_ERROR,
	LINUX_SO_DONTROUTE,
	LINUX_SO_BROADCAST,
	LINUX_SO_SNDBUF,
	LINUX_SO_RCVBUF,
	LINUX_SO_KEEPALIVE,
	LINUX_SO_OOBINLINE,
	LINUX_SO_NO_CHECK,
	LINUX_SO_PRIORITY,
	LINUX_SO_LINGER,
	LINUX_SO_BSDCOMPAT,
	LINUX_SO_REUSEPORT,
	LINUX_SO_PASSCRED,
	LINUX_SO_PEERCRED,
	LINUX_SO_RCVLOWAT,
	LINUX_SO_SNDLOWAT,
	LINUX_SO_RCVTIMEO,
	LINUX_SO_SNDTIMEO,
	LINUX_SO_TIMESTAMP,
	LINUX_SO_ACCEPTCONN = 30,
	LINUX_SO_SNDBUFFORCE = 32,
	LINUX_SO_RCVBUFFORCE,
};

enum
{
	BSD_SO_DEBUG = 1,
	BSD_SO_ACCEPTCONN = 2,
	BSD_SO_REUSEADDR = 4,
	BSD_SO_KEEPALIVE = 8,
	BSD_SO_DONTROUTE = 0x10,
	BSD_SO_BROADCAST = 0x20,
	BSD_SO_USELOOPBACK = 0x40,
	BSD_SO_LINGER_TICKS = 0x80,
	BSD_SO_OOBINLINE = 0x100,
	BSD_SO_REUSEPORT = 0x200,
	BSD_SO_TIMESTAMP = 0x400,
	BSD_SO_SNDBUF = 0x1001,
	BSD_SO_RCVBUF,
	BSD_SO_SNDLOWAT,
	BSD_SO_RCVLOWAT,
	BSD_SO_SNDTIMEO,
	BSD_SO_RCVTIMEO,
	BSD_SO_ERROR,
	BSD_SO_TYPE,
	BSD_SO_NOSIGNAL = 0x1022,
	BSD_SO_LINGER_SEC = 0x1080,
};

enum
{
	LINUX_TCP_NODELAY = 1,
	LINUX_TCP_MAXSEG,
	LINUX_TCP_CORK,
	LINUX_TCP_KEEPIDLE,
	LINUX_TCP_KEEPINTVL,
	LINUX_TCP_KEEPCNT,
};

enum
{
	BSD_TCP_NODELAY = 1,
	BSD_TCP_MAXSEG,
	BSD_TCP_KEEPALIVE = 0x10,
	BSD_TCP_KEEPINTVL = 0x101,
	BSD_TCP_KEEPCNT,
};

enum
{
	LINUX_IP_TOS = 1,
	LINUX_IP_TTL,
	LINUX_IP_HDRINCL,
	LINUX_IP_OPTIONS,
	LINUX_IP_RECVOPTS = 6,
	LINUX_IP_RETOPTS,
	LINUX_IP_RECVTTL = 12,
	LINUX_IP_MULTICAST_IF = 32,
	LINUX_IP_MULTICAST_TTL,
	LINUX_IP_MULTICAST_LOOP,
	LINUX_IP_ADD_MEMBERSHIP,
	LINUX_IP_DROP_MEMBERSHIP,
};

enum
{
	BSD_IP_OPTIONS = 1,
	BSD_IP_HDRINCL,
	BSD_IP_TOS,
	BSD_IP_TTL,
	BSD_IP_RECVOPTS,
	BSD_IP_RECVRETOPTS,
	BSD_IP_RETOPTS,
	BSD_IP_MULTICAST_IF,
	BSD_IP_MULTICAST_TTL,
	BSD_IP_MULTICAST_LOOP,
	BSD_IP_ADD_MEMBERSHIP,
	BSD_IP_DROP_MEMBERSHIP,
	BSD_IP_RECVTTL = 24,
};

enum
{
	LINUX_IPV6_2292PKTINFO = 2,
	LINUX_IPV6_2292HOPOPTS,
	LINUX_IPV6_2292DSTOPTS,
	LINUX_IPV6_2292RTHDR,
	LINUX_IPV6_2292PKTOPTIONS,
	LINUX_IPV6_CHECKSUM,
	LINUX_IPV6_2292HOPLIMIT,
	LINUX_IPV6_NEXTHOP,
	LINUX_IPV6_UNICAST_HOPS = 16,
	LINUX_IPV6_MULTICAST_IF,
	LINUX_IPV6_MULTICAST_HOPS,
	LINUX_IPV6_MULTICAST_LOOP,
	LINUX_IPV6_JOIN_GROUP,
	LINUX_IPV6_LEAVE_GROUP,
};

enum
{
	BSD_IPV6_UNICAST_HOPS = 4,
	BSD_IPV6_MULTICAST_IF = 9,
	BSD_IPV6_MULTICAST_HOPS,
	BSD_IPV6_MULTICAST_LOOP,
	BSD_IPV6_JOIN_GROUP,
	BSD_IPV6_LEAVE_GROUP,
	BSD_IPV6_2292PKTINFO = 19,
	BSD_IPV6_2292HOPLIMIT,
	BSD_IPV6_2292NEXTHOP,
	BSD_IPV6_2292HOPOPTS,
	BSD_IPV6_2292DSTOPTS,
	BSD_IPV6_2292RTHDR,
};

struct linger
{
	int l_onoff;
	int l_linger;
};

int sockopt_bsd_to_linux(int* level, int* optname, void** optval, void* optbuf);

#endif

