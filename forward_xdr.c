/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "forward.h"

bool_t
xdr_file (XDR *xdrs, file *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->filename, MAXLEN,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->content, MAXLEN,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nbytes))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->checksum))
		 return FALSE;
	return TRUE;
}
