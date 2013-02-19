/*
 * simple_mod.c
 * Copyright (C) 2013 Chaitanya H. <C@24.IO>
 * Version 1.0: Wed Feb 13 06:23:03 PST 2013
 *
 * This file is a part of an effort to instrument the network stack of Linux kernel.
 * I am using it to study the Linux TCP/IP stack flow through the Linux kernel.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * Source from: http://www.linuxchix.org/content/courses/kernel_hacking/lesson8
 * Machine: 3.2.0-37-generic
 *
 */



#include <linux/module.h>
#include <linux/kernel.h>


int init_module (void) {

	printk(KERN_INFO "init_module() called\n");
	return 0;

}

void cleanup_module(void) {

	printk(KERN_INFO "cleanup_module() called\n");

}


