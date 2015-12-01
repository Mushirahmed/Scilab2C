/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __PROD_H__
#define __PROD_H__

#include "dynlib_statisticsfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
/*
** \brief Sum of a scalar element, just returns it
*/
#define		sprods(in)			in
#define		srowprods(in)			in
#define		scolumnprods(in)		in
#define		smatlabprods(in)			in

/*
** \brief Sum of a scalar element, just returns it
*/
#define		dprods(in)			in
#define		drowprods(in)			in
#define		dcolumnprods(in)		in
#define		dmatlabprods(in)			in

/*
** \brief Sum of a scalar element, just returns it
*/
#define		cprods(in)			in
#define		crowprods(in)			in
#define		ccolumnprods(in)		in
#define		cmatlabprods(in)			in

/*
** \brief Sum of a scalar element, just returns it
*/
#define		zprods(in)			in
#define		zrowprods(in)			in
#define		zcolumnprods(in)		in
#define		zmatlabprods(in)			in

/*
** \brief Sum of a float array
** \param in the float array to process
** \param size, the size of the array
** \returns the prod.
*/
EXTERN_STATFUNC float		sproda(float *in, int size);
EXTERN_STATFUNC void		srowproda(float *in, int lines, int columns, float* out);
EXTERN_STATFUNC void		scolumnproda(float *in, int lines, int columns, float* out);

/*
** \brief Sum of a double array
** \param in the double array to process
** \param size, the size of the array
** \returns the prod.
*/
EXTERN_STATFUNC double		dproda(double *in, int size);
EXTERN_STATFUNC void		drowproda(double *in, int lines, int columns, double* out);
EXTERN_STATFUNC void		dcolumnproda(double *in, int lines, int columns, double* out);

/*
** \brief Sum of a float complex array
** \param in the float array to process
** \param size, the size of the array
** \returns the prod.
*/
EXTERN_STATFUNC floatComplex	cproda(floatComplex *in, int size);
EXTERN_STATFUNC void		crowproda(floatComplex *in, int lines, int columns, floatComplex* out);
EXTERN_STATFUNC void		ccolumnproda(floatComplex *in, int lines, int columns, floatComplex* out);

/*
** \brief Sum of a double complex array
** \param in the double array to process
** \param size, the size of the array
** \returns the prod.
*/
EXTERN_STATFUNC doubleComplex	zproda(doubleComplex *in, int size);
EXTERN_STATFUNC void		zrowproda(doubleComplex *in, int lines, int columns, doubleComplex* out);
EXTERN_STATFUNC void		zcolumnproda(doubleComplex *in, int lines, int columns, doubleComplex* out);

/*
** \brief Sum of a uint8 array
** \param in the uint8 to process
** \param size, the size of the array
** \returns the prod.
*/
EXTERN_STATFUNC uint8	u8proda(uint8 *in, int size);
EXTERN_STATFUNC void	u8rowproda(uint8 *in, int lines, int columns, uint8* out);
EXTERN_STATFUNC void	u8columnproda(uint8 *in, int lines, int columns, uint8* out);

/*
** \brief Sum of a uint16 array
** \param in the uint16 to process
** \param size, the size of the array
** \returns the prod.
*/
EXTERN_STATFUNC uint16	u16proda(uint16 *in, int size);
EXTERN_STATFUNC void	u16rowproda(uint16 *in, int lines, int columns, uint16* out);
EXTERN_STATFUNC void	u16columnproda(uint16 *in, int lines, int columns, uint16* out);

/*
** \brief Sum of a int8 array
** \param in the int8 to process
** \param size, the size of the array
** \returns the prod.
*/
EXTERN_STATFUNC int8	i8proda(int8 *in, int size);
EXTERN_STATFUNC void	i8rowproda(int8 *in, int lines, int columns, int8* out);
EXTERN_STATFUNC void	i8columnproda(int8 *in, int lines, int columns, int8* out);

/*
** \brief Sum of a int16 array
** \param in the int16 to process
** \param size, the size of the array
** \returns the prod.
*/
EXTERN_STATFUNC int16	i16proda(int16 *in, int size);
EXTERN_STATFUNC void	i16rowproda(int16 *in, int lines, int columns, int16* out);
EXTERN_STATFUNC void	i16columnproda(int16 *in, int lines, int columns, int16* out);


#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__PROD_H__ */
