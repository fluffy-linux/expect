/*
 * expPlatDecls.h --
 *
 *	Declarations of platform specific Expect APIs.
 *
 * RCS: @(#) $Id: expPlatDecls.h,v 1.1.2.1 2001/10/28 11:12:23 davygrvy Exp $
 */

#ifndef _EXPPLATDECLS
#define _EXPPLATDECLS

/* !BEGIN!: Do not edit below this line. */

/*
 * Exported function declarations:
 */


typedef struct ExpPlatStubs {
    int magic;
    struct ExpPlatStubHooks *hooks;

} ExpPlatStubs;

#ifdef __cplusplus
extern "C" {
#endif
extern ExpPlatStubs *expPlatStubsPtr;
#ifdef __cplusplus
}
#endif

#if defined(USE_EXP_STUBS) && !defined(USE_EXP_STUB_PROCS)

/*
 * Inline function declarations:
 */


#endif /* defined(USE_EXP_STUBS) && !defined(USE_EXP_STUB_PROCS) */

/* !END!: Do not edit above this line. */

#endif /* _EXPPLATDECLS */


