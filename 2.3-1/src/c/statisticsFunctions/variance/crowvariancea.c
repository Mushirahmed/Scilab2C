/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "variance.h"

void crowvariancea(floatComplex *in, int lines, int columns, floatComplex* out){
    
    int i = 0 ;
    
    for ( i = 0; i < columns ; i++)
    out[i] = cvariancea ( in + i*lines , lines) ;
}

