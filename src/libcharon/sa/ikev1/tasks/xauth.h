/*
 * Copyright (C) 2011 Martin Willi
 * Copyright (C) 2011 revosec AG
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

/**
 * @defgroup xauth xauth
 * @{ @ingroup tasks
 */

#ifndef XAUTH_H_
#define XAUTH_H_

typedef struct xauth_t xauth_t;

#include <library.h>
#include <sa/ike_sa.h>
#include <sa/task.h>

/**
 * Task of type TASK_XAUTH, additional authentication after main/aggressive mode.
 */
struct xauth_t {

	/**
	 * Implements the task_t interface
	 */
	task_t task;
};

/**
 * Create a new xauth task.
 *
 * @param ike_sa		IKE_SA this task works for
 * @param initiator		TRUE for initiator
 * @return				xauth task to handle by the task_manager
 */
xauth_t *xauth_create(ike_sa_t *ike_sa, bool initiator);

#endif /** XAUTH_H_ @}*/
