/*
determinant.h

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

#ifndef DETERMINANT
#define DETERMINANT
#include <octave/oct.h>
/*Include complex type of octave API C++ implementation*/
#include <octave/oct-cmplx.h>
#include <cmath>
#include "reduced.h"
#include "config.h"
#ifdef COMPLEX_DET
Complex determc(const ComplexMatrix &m); 
#endif
double determ(const Matrix &m);
#endif
