// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
// See the LICENSE file in the project root for more information.

/*=============================================================
**
** Source: commonconsts.h
**
**
**============================================================*/

#ifndef _COMMONCONSTS_H_
#define _COMMONCONSTS_H_

#include <pal.h>

const int TIMEOUT = 40000;

const WCHAR szcToHelperEvName[] =  { 'T', 'o', '\0' };
const WCHAR szcFromHelperEvName[] = { 'F', 'r', 'o', 'm', '\0' };

const char initialValue = '-';
const char nextValue = '|';
const char guardValue = '*';
const char *commsFileName = "AddrNLen.dat";

/* PEDANTIC and PEDANTIC0 is a helper macro that just grumps about any
 * zero return codes in a generic way. with little typing */
#define PEDANTIC(function, parameters) \
{ \
   if (! (function parameters) ) \
   { \
    Trace("%s: NonFatal failure of %s%s for reasons %u and %u\n", \
          __FILE__, #function, #parameters, GetLastError(), errno); \
   } \
} 
#define PEDANTIC1(function, parameters) \
{ \
   if ( (function parameters) ) \
   { \
    Trace("%s: NonFatal failure of %s%s for reasons %u and %u\n", \
          __FILE__, #function, #parameters, GetLastError(), errno); \
   } \
} 

#endif