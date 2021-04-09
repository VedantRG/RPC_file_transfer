/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _FORWARD_H_RPCGEN
#define _FORWARD_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define MAXLEN 20

struct file {
	char filename[MAXLEN];
	char content[MAXLEN];
	int nbytes;
	int checksum;
};
typedef struct file file;

#define FILEFORWARD 0x31230000
#define FILEFORWARD_1 1

#if defined(__STDC__) || defined(__cplusplus)
#define FILEFWD 1
extern  int * filefwd_1(file *, CLIENT *);
extern  int * filefwd_1_svc(file *, struct svc_req *);
extern int fileforward_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define FILEFWD 1
extern  int * filefwd_1();
extern  int * filefwd_1_svc();
extern int fileforward_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_file (XDR *, file*);

#else /* K&R C */
extern bool_t xdr_file ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_FORWARD_H_RPCGEN */
