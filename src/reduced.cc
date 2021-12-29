/*
reduced.cc

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



#include "reduced.h"

/*function to get reduced matrix*/
DEFUN_DLD(reduced,args,nargout,"get reduced matrix with two coeficients"){
	int nargin = args.length();
	if(nargin != 3){
		octave_stdout << "must have 3 arguments and you've pass " << nargin
		<< " arguments \n";
		print_usage();
	}
	Matrix m = args(0).matrix_value();
	octave_idx_type row, col;
	row = args(1).int_value();
	col = args(2).int_value();
	return octave_value(reduce(m,row,col));
}

/*
Reduce a matrix ommiting the row r and the column c
*/
Matrix reduce(const Matrix &m,octave_idx_type r, octave_idx_type c){
	dim_vector d = m.dims();
	Matrix ret(d(0)-1,d(1)-1);
	
	for(octave_idx_type i=0;i<d(0);i++){
		for(octave_idx_type j=0;j<d(1);j++){
			octave_idx_type row;
			octave_idx_type col;
			row=i;
			col=j;
			if(i>r)
				row--;
			if(j>c)
				col--;

			if(i!=r && j!=c)
				ret(row,col) = m(i,j);
		}
	}
	return ret;
}
#ifdef COMPLEX_DET
ComplexMatrix reducec(const ComplexMatrix &m,octave_idx_type r, octave_idx_type c){
	dim_vector d = m.dims();
	ComplexMatrix ret(d(0)-1,d(1)-1);
	
	for(octave_idx_type i=0;i<d(0);i++){
		for(octave_idx_type j=0;j<d(1);j++){
			octave_idx_type row;
			octave_idx_type col;
			row=i;
			col=j;
			if(i>r)
				row--;
			if(j>c)
				col--;

			if(i!=r && j!=c)
				ret(row,col) = m(i,j);
		}
	}
	return ret;
}
#endif
