/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2007-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __MULTIPLICATION_H__
#define __MULTIPLICATION_H__

#include "dynlib_operations.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
/*
**
** WARNING WE ASSUME MATRIXES TO BE CONSCISTENT
** size1 = size2;
**
*/

/*
** \brief Compute a multiplication with floats.
** \param in1 : input float.
** \param in2 : input float.
** \return : in1 * in 2 = in1 .* in2.
*/
EXTERN_OPERATIONS float	smuls(float in1, float in2);

/*
** \brief Compute a multiplication element ways for floats.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array.
** \param out : array that contains the multiplication  = in1 .* in2.
*/
EXTERN_OPERATIONS void	smula(float *in1,  float *in2, int size2, float *out);

/*
** \brief Compute a multiplication for floats.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array.
** \return : scalar that contains the multiplication of the two vectors = in1 .* in2.
*/
EXTERN_OPERATIONS float	smulv(float *in1,  float *in2, int size2);

/*
** \brief Compute a multiplication with double.
** \param in1 : input double.
** \param in2 : input double.
** \return : in1 * in 2 = in1 .* in2.
*/
EXTERN_OPERATIONS double	dmuls(double in1, double in2);

/*
** \brief Compute a multiplication element ways for double.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array.
** \param out : array that contains the multiplication  = in1 .* in2.
*/
EXTERN_OPERATIONS void	dmula(double *in1, double *in2, int size,double * out);

/*
** \brief Compute a multiplication for floats.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array.
** \return : scalar that contains the multiplication of the two vectors = in1 .* in2.
*/
EXTERN_OPERATIONS double dmulv(double *in1, double *in2, int size2);

/*
** \brief Compute a multiplication with floats Complex.
** \param in1 : input float complex.
** \param in2 : input float complex.
** \return : in1 * in 2 = in1 .* in2.
*/
EXTERN_OPERATIONS floatComplex	cmuls(floatComplex in1, floatComplex in2);

/*
** \brief Compute a multiplication element ways for complex single precision.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array.
** \param out : array that contains the multiplication  = in1 .* in2.
*/
EXTERN_OPERATIONS void	cmula(floatComplex *in1, floatComplex *in2, int size, floatComplex *out);

/*
** \brief Compute a multiplication for floats.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array.
** \return : scalar that contains the multiplication of the two vectors = in1 .* in2.
*/
EXTERN_OPERATIONS floatComplex	cmulv(floatComplex *in1, floatComplex *in2, int size2);

EXTERN_OPERATIONS floatComplex	cmulcsv(floatComplex *in1, float *in2, int size2);

EXTERN_OPERATIONS floatComplex	cmulscv(float *in1, floatComplex *in2, int size2);


/*
** \brief Compute a multiplication with double complex.
** \param in1 : input double complex.
** \param in2 : input double conplex.
** \return : in1 * in 2 = in1 .* in2.
*/
EXTERN_OPERATIONS doubleComplex	zmuls(doubleComplex in1, doubleComplex in2);

/*
** \brief Compute a multiplication element ways for complex double precision.
** \param in1 : input array.
** \param in2 : input array.
** \param size: size of in2 array.
** \param out : array that contains the multiplication  = in1 .* in2.
*/
EXTERN_OPERATIONS void	zmula(doubleComplex *in1, doubleComplex *in2, int size, doubleComplex *out);

/*
** \brief Compute a multiplication for double.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array.
** \return : scalar that contains the multiplication of the two vectors = in1 .* in2.
*/
EXTERN_OPERATIONS doubleComplex zmulv(doubleComplex *in1, doubleComplex *in2, int size2);

EXTERN_OPERATIONS doubleComplex zmulzdv(doubleComplex *in1, double *in2, int size2);

EXTERN_OPERATIONS doubleComplex zmuldzv(double *in1, doubleComplex *in2, int size2);

/*
** \brief Compute a multiplication element ways for uint8.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array.
** \param out : array that contains the multiplication  = in1 .* in2.
*/
EXTERN_OPERATIONS void	u8mula(uint8 *in1, uint8 *in2, int size,uint8 * out);

/*
** \brief Compute a multiplication with uint8.
** \param in1 : input uint8.
** \param in2 : input uint8.
** \return : in1 * in 2 = in1 .* in2.
*/
EXTERN_OPERATIONS uint8	u8muls(uint8 in1, uint8 in2);

/*
** \brief Compute a multiplication for uint8 arrays.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array.
** \return : scalar that contains the multiplication of the two vectors = in1 .* in2.
*/
EXTERN_OPERATIONS uint8 u8mulv(uint8 *in1,  uint8 *in2, int size2);

/*
** \brief Compute a multiplication element ways for int8.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array.
** \param out : array that contains the multiplication  = in1 .* in2.
*/
EXTERN_OPERATIONS void	i8mula(int8 *in1, int8 *in2, int size,int8 * out);

/*
** \brief Compute a multiplication with int8.
** \param in1 : input int8.
** \param in2 : input int8.
** \return : in1 * in 2 = in1 .* in2.
*/
EXTERN_OPERATIONS int8	i8muls(int8 in1, int8 in2);

/*
** \brief Compute a multiplication for int8 arrays.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array.
** \return : scalar that contains the multiplication of the two vectors = in1 .* in2.
*/
EXTERN_OPERATIONS int8 i8mulv(int8 *in1,  int8 *in2, int size2);

/*
** \brief Compute a multiplication element ways for uint16.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array.
** \param out : array that contains the multiplication  = in1 .* in2.
*/
EXTERN_OPERATIONS void	u16mula(uint16 *in1, uint16 *in2, int size,uint16 * out);

/*
** \brief Compute a multiplication with uint16.
** \param in1 : input uint16.
** \param in2 : input uint16.
** \return : in1 * in 2 = in1 .* in2.
*/
EXTERN_OPERATIONS uint16 u16muls(uint16 in1, uint16 in2);

/*
** \brief Compute a multiplication for uint16 arrays.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array.
** \return : scalar that contains the multiplication of the two vectors = in1 .* in2.
*/
EXTERN_OPERATIONS uint16 u16mulv(uint16 *in1,  uint16 *in2, int size2);

/*
** \brief Compute a multiplication element ways for int16.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array.
** \param out : array that contains the multiplication  = in1 .* in2.
*/
EXTERN_OPERATIONS void	i16mula(int16 *in1, int16 *in2, int size,int16 * out);

/*
** \brief Compute a multiplication with int16.
** \param in1 : input int16.
** \param in2 : input int16.
** \return : in1 * in 2 = in1 .* in2.
*/
EXTERN_OPERATIONS int16 i16muls(int16 in1, int16 in2);

/*
** \brief Compute a multiplication for int16 arrays.
** \param in1 : input array.
** \param in2 : input array.
** \param size : size of in2 array.
** \return : scalar that contains the multiplication of the two vectors = in1 .* in2.
*/
EXTERN_OPERATIONS int16 i16mulv(int16 *in1,  int16 *in2, int size2);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__MULTIPLICATION_H__ */
