/*
 * Soft:        Keepalived is a failover program for the LVS project
 *              <www.linuxvirtualserver.org>. It monitor & manipulate
 *              a loadbalanced server pool using multi-layer checks.
 *
 * Part:        vrrp_index.c include file.
 *
 * Author:      Alexandre Cassen, <acassen@linux-vs.org>
 *
 *              This program is distributed in the hope that it will be useful,
 *              but WITHOUT ANY WARRANTY; without even the implied warranty of
 *              MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *              See the GNU General Public License for more details.
 *
 *              This program is free software; you can redistribute it and/or
 *              modify it under the terms of the GNU General Public License
 *              as published by the Free Software Foundation; either version
 *              2 of the License, or (at your option) any later version.
 *
 * Copyright (C) 2001-2017 Alexandre Cassen, <acassen@gmail.com>
 */

#ifndef _VRRP_INDEX_H
#define _VRRP_INDEX_H

/* global includes */
#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <string.h>
#include <syslog.h>

/* local includes */
#include "vrrp.h"

/* Macro definition */

/* prototypes */
extern int get_vrrp_hash(const int, const int);
extern void alloc_vrrp_bucket(vrrp_t *);
extern void alloc_vrrp_fd_bucket(vrrp_t *);
extern void remove_vrrp_fd_bucket(vrrp_t *);
extern void set_vrrp_fd_bucket(int, vrrp_t *);
extern vrrp_t *vrrp_index_lookup(const int, const int);

#endif
