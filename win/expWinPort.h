/* ----------------------------------------------------------------------------
 * expWinPort.h --
 *
 *	This header file handles porting issues that occur because of
 *	differences between Windows and Unix. 
 *
 * ----------------------------------------------------------------------------
 *
 * Written by: Don Libes, libes@cme.nist.gov, NIST, 12/3/90
 * 
 * Design and implementation of this program was paid for by U.S. tax
 * dollars.  Therefore it is public domain.  However, the author and NIST
 * would appreciate credit if this program or parts of it are used.
 * 
 * Copyright (c) 1997 Mitel Corporation
 *	work by Gordon Chaffee <chaffee@bmrc.berkeley.edu> for the WinNT port.
 *
 * Copyright (c) 2001 Telindustrie, LLC
 *	work by David Gravereaux <davygrvy@pobox.com> for any Win32 OS.
 *
 * ----------------------------------------------------------------------------
 * URLs:    http://expect.nist.gov/
 *	    http://expect.sf.net/
 *	    http://bmrc.berkeley.edu/people/chaffee/expectnt.html
 * ----------------------------------------------------------------------------
 * RCS: @(#) $Id: expWinPort.h,v 1.1.2.4 2001/11/07 10:04:57 davygrvy Exp $
 * ----------------------------------------------------------------------------
 */

#ifndef _EXPWINPORT
#define _EXPWINPORT

#ifndef _EXPINT
#   include "expInt.h"
#endif


#define HAVE_SV_TIMEZONE 1

#define EXP_SLAVE_CREATE 'c'
#define EXP_SLAVE_KEY    'k'
#define EXP_SLAVE_MOUSE  'm'
#define EXP_SLAVE_WRITE  'w'
#define EXP_SLAVE_KILL   'x'

/*
 * Define the types of attempts to use to kill the subprocess
 */
#define EXP_KILL_TERMINATE  0x1
#define EXP_KILL_CTRL_C     0x2
#define EXP_KILL_CTRL_BREAK 0x4

/*
 * Errors and logging
 */
#define EXP_LOG0(errCode)		ExpWinSyslog(errCode, __FILE__, (int)__LINE__, 0)
#define EXP_LOG1(errCode, arg1)		ExpWinSyslog(errCode, __FILE__, (int)__LINE__, arg1, 0)
#define EXP_LOG2(errCode, arg1, arg2)	ExpWinSyslog(errCode, __FILE__, (int)__LINE__, arg1, arg2, 0)

/*
 * The following defines identify the various types of applications that 
 * run under windows.  There is special case code for the various types.
 */

#define EXP_APPL_NONE	    0
#define EXP_APPL_DOS	    1
#define EXP_APPL_WIN3X	    2
#define EXP_APPL_WIN32CUI   3
#define EXP_APPL_WIN32GUI   4


#undef TCL_STORAGE_CLASS
#if defined(BUILD_spawndriver)
#   define TCL_STORAGE_CLASS
#elif defined(BUILD_exp)
#   define TCL_STORAGE_CLASS DLLEXPORT
#else
#   ifdef USE_EXP_STUBS
#	define TCL_STORAGE_CLASS
#   else
#	define TCL_STORAGE_CLASS DLLIMPORT
#   endif
#endif


#include "expPlatDecls.h"

#undef TCL_STORAGE_CLASS
#define TCL_STORAGE_CLASS DLLIMPORT

#endif /* _EXPWINPORT */
