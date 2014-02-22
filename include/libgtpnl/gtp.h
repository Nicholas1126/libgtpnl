#ifndef _LIBGTP_H_
#define _LIBGTP_H_

#include <stdint.h>

struct gtp_tunnel;

struct gtp_tunnel *gtp_tunnel_alloc(void);
void gtp_tunnel_free(struct gtp_tunnel *t);

void gtp_tunnel_set_ifidx(struct gtp_tunnel *t, uint32_t ifidx);
void gtp_tunnel_set_ms_ip4(struct gtp_tunnel *t, struct in_addr *ms_addr);
void gtp_tunnel_set_sgsn_ip4(struct gtp_tunnel *t, struct in_addr *sgsn_addr);
void gtp_tunnel_set_version(struct gtp_tunnel *t, uint32_t version);
void gtp_tunnel_set_tid(struct gtp_tunnel *t, uint64_t tid);

const uint32_t gtp_tunnel_get_ifidx(struct gtp_tunnel *t);
const struct in_addr *gtp_tunnel_get_ms_ip4(struct gtp_tunnel *t);
const struct in_addr *gtp_tunnel_get_sgsn_ip4(struct gtp_tunnel *t);
int gtp_tunnel_get_version(struct gtp_tunnel *t);
uint64_t gtp_tunnel_get_tid(struct gtp_tunnel *t);

#endif