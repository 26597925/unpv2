/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _NULLARGS_H_RPCGEN
#define	_NULLARGS_H_RPCGEN

#include <rpc/rpc.h>

#ifdef __cplusplus
extern "C" {
#endif


#define	SQUARE_PROG ((unsigned long)(0x31230000))
#define	SQUARE_VERS ((unsigned long)(1))

#if defined(__STDC__) || defined(__cplusplus)
#define	SQUAREPROC ((unsigned long)(1))
extern  void * squareproc_1(void *, CLIENT *);
extern  void * squareproc_1_svc(void *, struct svc_req *);
extern int square_prog_1_freeresult(SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define	SQUAREPROC ((unsigned long)(1))
extern  void * squareproc_1();
extern  void * squareproc_1_svc();
extern int square_prog_1_freeresult();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_NULLARGS_H_RPCGEN */
