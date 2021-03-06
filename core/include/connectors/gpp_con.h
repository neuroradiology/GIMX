/*
 Copyright (c) 2012 Mathieu Laurendeau <mat.lau@laposte.net>
 License: GPLv3
 */

#ifndef GPP_CON_H_
#define GPP_CON_H_

#include <defs.h>
#include <hidasync.h>
#include <pcprog.h>

int gpp_connect(int id, const char* device);

int gpp_send(int id, e_controller_type type, int axis[AXIS_MAX]);

void gpp_disconnect(int id);

int8_t gpp_start_async(int id, ASYNC_READ_CALLBACK fp_read, ASYNC_WRITE_CALLBACK fp_write, ASYNC_CLOSE_CALLBACK fp_close, ASYNC_REGISTER_SOURCE fp_register);

#endif /* GPP_CON_H_ */
