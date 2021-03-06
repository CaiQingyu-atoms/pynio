
/*
 *      $Id: NclType.h.sed,v 1.2 2008-12-10 20:12:17 dbrown Exp $
 */
/************************************************************************
*									*
*			     Copyright (C)  1995			*
*	     University Corporation for Atmospheric Research		*
*			     All Rights Reserved			*
*									*
************************************************************************/
/*
 *	File:		
 *
 *	Author:		Ethan Alpert
 *			National Center for Atmospheric Research
 *			PO 3000, Boulder, Colorado
 *
 *	Date:		Fri Jan 27 18:25:39 MST 1995
 *
 *	Description:	
 */
#ifndef NclTypefloat_h
#define NclTypefloat_h
#ifdef NIO_LIB_ONLY
#include "nioConvertP.h"
#else
#include <ncarg/hlu/ConvertP.h>
#endif
#include "defs.h"
#include "NclType.h"
#include "NclTypedouble.h"
#include <math.h>
#include "NclMultiDValData.h"
#include "DataSupport.h"


typedef struct _NclTypefloatClassPart {
	char * foo;
} NclTypefloatClassPart;

typedef struct _NclTypefloatPart {
	char * foo;
} NclTypefloatPart;

typedef struct _NclTypefloatClassRec {
	NclObjClassPart	obj_class;
	NclTypeClassPart type_class;
	NclTypefloatClassPart floatval_class;
}NclTypefloatClassRec;

typedef struct _NclTypefloatRec {
	NclObjPart	obj;
	NclTypePart	type;
	NclTypefloatPart	floatval;
}NclTypefloatRec;

typedef NclTypefloatRec *NclTypefloat;
typedef NclTypefloatClassRec *NclTypefloatClass;

extern NclObjClass nclTypefloatClass;
extern NclTypefloatClassRec nclTypefloatClassRec;

NclType _NclTypefloatCreate(
#if	NhlNeedProto
NclObj /* inst */, 
NclObjClass /* theclass */,
NclObjTypes /* obj_type */, 
unsigned int /* obj_type_mask */, 
NclStatus /* status*/
#endif
);

#endif /* NclTypefloat_h*/
