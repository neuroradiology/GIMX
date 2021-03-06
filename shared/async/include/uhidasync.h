/*
 Copyright (c) 2015 Mathieu Laurendeau
 License: GPLv3
 */

#ifndef UHIDASYNC_H_
#define UHIDASYNC_H_

#include <hidasync.h>

int uhidasync_create(const s_hid_info * hidDesc);
int uhidasync_close(int device);
int uhidasync_write(int device, const void * buf, unsigned int count);
int uhidasync_is_opened(int device);

#endif /* UHIDASYNC_H_ */
