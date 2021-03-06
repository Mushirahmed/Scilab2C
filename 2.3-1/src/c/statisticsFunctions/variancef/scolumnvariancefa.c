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


#include "variancef.h"
#include "meanf.h"


void scolumnvariancefa(float *in1, int lines, int columns, float *in2, float* out){
  int i = 0;
  int j = 0;
  float temp = 0.0f;
  float accumulate = 0.0f;
  float accumulateFre = 0.0f ;
    
  scolumnmeanfa(in1, lines, columns, in2, out );

  
  /*we first multiply each cell of the input matrix by its coefficient*/
  for (j = 0; j < lines; ++j)
    {
      accumulate = 0.0f;
      accumulateFre= 0.0f;
      temp = 0.0f;

      for ( i = 0 ; i < columns; ++i )
        {
         temp = spows (  (in1[lines*i + j]  - out[j] ) ,2 );
         temp *= in2[lines*i + j];

         accumulate += temp ;
         accumulateFre += in2[lines*i + j];
        } 
      out[j] = accumulate / (accumulateFre - 1) ;
    }

}

