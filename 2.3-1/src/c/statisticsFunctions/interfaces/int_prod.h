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

#ifndef __INT_PROD_H__
#define __INT_PROD_H__

#define s0prods0(in)					sprods(in)

#define d0prodd0(in)					dprods(in)

#define c0prodc0(in)					cprods(in)
	
#define z0prodz0(in)					zprods(in)

#define u80produ80(in)					u8prods(in)

#define u160produ160(in)				u16prods(in)

#define i80prodi80(in)					i8prods(in)
	
#define i160prodi160(in)				i16prods(in)

#define s2prods0(in,size)				sproda(in, size[0]*size[1])

#define d2prodd0(in,size)				dproda(in, size[0]*size[1])

#define c2prodc0(in,size)				cproda(in, size[0]*size[1])

#define z2prodz0(in,size)				zproda(in, size[0]*size[1])

#define u82produ80(in,size)				u8proda(in, size[0]*size[1])

#define u162produ160(in,size)				u16proda(in, size[0]*size[1])

#define i82prodi80(in,size)				i8proda(in, size[0]*size[1])

#define i162prodi160(in,size)				i16proda(in, size[0]*size[1])

	
#define s0s0prods0(in1,in2)				(in2==1) ? srowprods(in1) : scolumnprods(in1)	

#define d0d0prodd0(in1,in2)				(in2==1) ? drowprods(in1) : dcolumnprods(in1)	

#define c0s0prodc0(in1,in2)				(in2==1) ? crowprods(in1) : ccolumnprods(in1)	

#define z0d0prodz0(in1,in2)				(in2==1) ? zrowprods(in1) : zcolumnprods(in1)

#define u80u80produ80(in1,in2)				(in2==1) ? u8rowprods(in1) : u8columnprods(in1)	

#define u160u160produ160(in1,in2)			(in2==1) ? u16rowprods(in1) : u16columnprods(in1)	

#define i80s0prodi80(in1,in2)				(in2==1) ? i8rowprods(in1) : i8columnprods(in1)	

#define i160d0prodi160(in1,in2)				(in2==1) ? i16rowprods(in1) : i16columnprods(in1)		

#define s2s0prods2(in1,size,in2,out)		(in2==1) ? srowproda(in1,size[0],size[1],out) : scolumnproda(in1,size[0],size[1],out)	

#define d2d0prodd2(in1,size,in2,out)		(in2==1) ? drowproda(in1,size[0],size[1],out) : dcolumnproda(in1,size[0],size[1],out)

#define c2s0prodc2(in1,size,in2,out)		(in2==1) ? crowproda(in1,size[0],size[1],out) : ccolumnproda(in1,size[0],size[1],out)

#define z2d0prodz2(in1,size,in2,out)		(in2==1) ? zrowproda(in1,size[0],size[1],out) : zcolumnproda(in1,size[0],size[1],out)

#define u82u80produ82(in1,size,in2,out)		(in2==1) ? u8rowproda(in1,size[0],size[1],out) : u8columnproda(in1,size[0],size[1],out)	

#define u162u160produ162(in1,size,in2,out)	(in2==1) ? u16rowproda(in1,size[0],size[1],out) : u16columnproda(in1,size[0],size[1],out)

#define i82i80prodi82(in1,size,in2,out)		(in2==1) ? i8rowproda(in1,size[0],size[1],out) : i8columnproda(in1,size[0],size[1],out)

#define i162d0prodi162(in1,size,in2,out)	(in2==1) ? i16rowproda(in1,size[0],size[1],out) : i16columnproda(in1,size[0],size[1],out)		
		
	/*'r'  and 'c' case  */	
#define s0g2prods0(in1,in2,size2)			(in2[0]=='r') ? srowprods(in1) : scolumnprods(in1)	

#define d0g2prodd0(in1,in2,size2)			(in2[0]=='r') ? drowprods(in1) : dcolumnprods(in1)	

#define c0g2prodc0(in1,in2,size2)			(in2[0]=='r') ? crowprods(in1) : ccolumnprods(in1)	

#define z0g2prodz0(in1,in2,size2)			(in2[0]=='r') ? zrowprods(in1) : zcolumnprods(in1)

#define u80g2produ80(in1,in2,size2)			(in2[0]=='r') ? u8rowprods(in1) : u8columnprods(in1)	

#define u160g2produ160(in1,in2,size2)			(in2[0]=='r') ? u16rowprods(in1) : u16columnprods(in1)	

#define i80g2prodi80(in1,in2,size2)			(in2[0]=='r') ? i8rowprods(in1) : i8columnprods(in1)	

#define i160g2prodi160(in1,in2,size2)			(in2[0]=='r') ? i16rowprods(in1) : i16columnprods(in1)
	
#define s2g2prods2(in1,size,in2,size2,out)		(in2[0]=='r') ? srowproda(in1,size[0],size[1],out : scolumnproda(in1,size[0],size[1],out)	

#define d2g2prodd2(in1,size,in2,size2,out)		(in2[0]=='r') ? drowproda(in1,size[0],size[1],out) : dcolumnproda(in1,size[0],size[1],out)

#define c2g2prodc2(in1,size,in2,size2,out)		(in2[0]=='r') ? crowproda(in1,size[0],size[1],out) : ccolumnproda(in1,size[0],size[1],out)

#define z2g2prodz2(in1,size,in2,size2,out)		(in2[0]=='r') ? zrowproda(in1,size[0],size[1],out) : zcolumnproda(in1,size[0],size[1],out)

#define u82g2produ82(in1,size,in2,size2,out)		(in2[0]=='r') ? u8rowproda(in1,size[0],size[1],out : u8columnproda(in1,size[0],size[1],out)	

#define u162g2produ162(in1,size,in2,size2,out)		(in2[0]=='r') ? u16rowproda(in1,size[0],size[1],out) : u16columnproda(in1,size[0],size[1],out)

#define i82g2prodi82(in1,size,in2,size2,out)		(in2[0]=='r') ? i8rowproda(in1,size[0],size[1],out) : i8columnproda(in1,size[0],size[1],out)

#define i162g2prodi162(in1,size,in2,size2,out)		(in2[0]=='r') ? i16rowproda(in1,size[0],size[1],out) : i16columnproda(in1,size[0],size[1],out)		
		
	
	

#endif /* !__INT_PROD_H__ */
