/*  =========================================================================
    fty_common_nut_classes - private header file

    Copyright (C) 2014 - 2020 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_COMMON_NUT_CLASSES_H_INCLUDED
#define FTY_COMMON_NUT_CLASSES_H_INCLUDED

//  Platform definitions, must come first
#include "platform.h"

//  External API
#include "../include/fty_common_nut.h"

//  Opaque class structures to allow forward references
#ifndef FTY_COMMON_NUT_UTILS_PRIVATE_T_DEFINED
typedef struct _fty_common_nut_utils_private_t fty_common_nut_utils_private_t;
#define FTY_COMMON_NUT_UTILS_PRIVATE_T_DEFINED
#endif

//  Extra headers

//  Internal API

#include "fty_common_nut_utils_private.h"

//  *** To avoid double-definitions, only define if building without draft ***
#ifndef FTY_COMMON_NUT_BUILD_DRAFT_API

//  Self test for private classes
FTY_COMMON_NUT_PRIVATE void
    fty_common_nut_private_selftest (bool verbose, const char *subtest);

#endif // FTY_COMMON_NUT_BUILD_DRAFT_API

#endif
