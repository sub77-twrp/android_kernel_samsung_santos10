/*
 *  STMicroelectronics k2dh acceleration sensor driver
 *
 *  Copyright (C) 2010 Samsung Electronics Co.Ltd
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 */

#ifndef __K2DH_ACC_HEADER__
#define __K2DH__ACC_HEADER__

#include <linux/types.h>
#include <linux/ioctl.h>

extern struct class *sec_class;

struct k2dh_acceldata {
	__s16 x;
	__s16 y;
	__s16 z;
};

/* dev info */
#define ACC_DEV_NAME "accelerometer"

/* k2dh ioctl command label */
#define K2DH_IOCTL_BASE 'a'
#define K2DH_IOCTL_SET_DELAY		_IOW(K2DH_IOCTL_BASE, 0, int64_t)
#define K2DH_IOCTL_GET_DELAY		_IOR(K2DH_IOCTL_BASE, 1, int64_t)
#define K2DH_IOCTL_READ_ACCEL_XYZ	_IOR(K2DH_IOCTL_BASE, 8, \
						struct k2dh_acceldata)
#define K2DH_IOCTL_SET_ENABLE		_IOW(K2DH_IOCTL_BASE, 9, int)
#endif
