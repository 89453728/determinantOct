/*
determinant.cc

Copyright (C) 2020-2021 Yassin Achengli <0619883460@uma.es>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING.  If not, see
<https://www.gnu.org/licenses/>.

======================================================================
*/


#include "determinant.h"
/*determinant method dinamically linked in octave as oct file,
you must pass to it a square matrix to calculate the determinant
with recursive method*/
DEFUN_DLD(determinant,args,nargout,"determinante de \
									una matriz nxn"){
	int nargin = args.length();
	if(nargin != 1){
		octave_stdout << "must have 1 argument\n";
		print_usage();
	}
	#ifdef COMPLEX_DET
	ComplexMatrix m = args(0).complex_matrix_value();
	return octave_value(determc(m));
	#else
	Matrix m = args(0).matrix_value();
	return octave_value(determ(m));
	#endif
}

#ifdef COMPLEX_DET
Complex determc (const ComplexMatrix &m){
	dim_vector d = m.dims();
	Complex det = 0;
	if(d(0) != d(1))
		octave_stdout << "Matrix must be square\n";
	
	if(d(1) > 2){
		for(octave_idx_type i=0;i<d(0);i++)
			det+=pow(-1,i)*m(i,0)*determc(reducec(m,i,0));
	}else{
		det+=m(0,0)*m(1,1)-m(0,1)*m(1,0);
	}
	return det;

}
#endif
/*recursive funcion to calculate the determinant*/
double determ (const Matrix &m){
	dim_vector d = m.dims();
	double det = 0;
	if(d(0) != d(1)){
		octave_stdout << "Matrix must be square\n";
	}
	if(d(1) > 2){
		for(octave_idx_type i=0;i<d(0);i++){
			det += pow(-1,i)*m(i,0)*determ(reduce(m,i,0));
		}
	}else{
		det = m(0,0)*m(1,1) - m(0,1)*m(1,0);
	}
	return det;
}

