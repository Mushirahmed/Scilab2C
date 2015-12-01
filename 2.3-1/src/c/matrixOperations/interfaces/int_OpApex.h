/*
 * Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 * Copyright (C) 2008-2008 - INRIA - Bruno JOFRET
 * 
 * This file must be used under the terms of the CeCILL.
 * This source file is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.  The terms
 * are also available at    
 * http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

/* THIS IS AN AUTOMATICALLY GENERATED FILE : DO NOT EDIT BY HAND. */

#ifndef __INT_OPAPEX_H__
#define __INT_OPAPEX_H__

#define s0OpApexs0(in)			in

#define d0OpApexd0(in)			in

#define c0OpApexc0(in)			cconjs(in)

#define z0OpApexz0(in)			zconjs(in)

#define u80OpApexu80(in)		(uint8)in

#define u160OpApexu160(in)		(uint16)in

#define i80OpApexi80(in)		(int8)in

#define i160OpApexi160(in)		(int16)in

#define s2OpApexs2(in,size,out)		stransposea(in,size[0],size[1],out);

#define d2OpApexd2(in,size,out)		dtransposea(in,size[0],size[1],out);

#define c2OpApexc2(in,size,out)		ctransposea(in,size[0],size[1],out);cconja(out,size[0]*size[1],out);

#define z2OpApexz2(in,size,out)		ztransposea(in,size[0],size[1],out);zconja(out,size[0]*size[1],out);

#define u82OpApexu82(in,size,out)		u8transposea(in, size[0], size[1], out)

#define u162OpApexu162(in,size,out)		u16transposea(in, size[0], size[1], out)

#define i82OpApexi82(in,size,out)	        i8transposea(in, size[0], size[1], out)

#define i162OpApexi162(in,size,out)		i16transposea(in, size[0], size[1], out)

#endif /* !__INT_OPAPEX_H__ */
