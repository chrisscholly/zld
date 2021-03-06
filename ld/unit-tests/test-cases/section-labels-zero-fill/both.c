/* -*- mode: C++; c-basic-offset: 4; tab-width: 4 -*- 
 *
 * Copyright (c) 2009 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
#include <stdio.h>


extern int  bss_start  __asm("section$start$__DATA$__bss");
extern int  bss_end    __asm("section$end$__DATA$__bss");
extern int  common_start  __asm("section$start$__DATA$__common");
extern int  common_end    __asm("section$end$__DATA$__common");

int mycommon[2];
static int mybss[2];

int main()
{
	mybss[0] = 0;
	printf("bss start = %p\n", &bss_start);
	printf("bss end = %p\n", &bss_end);
	printf("common start = %p\n", &common_start);
	printf("common end = %p\n", &common_end);
	return 0;
}