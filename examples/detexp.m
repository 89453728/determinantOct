%
% detexp.m
%
% Copyright (C) 2020-2021 Yassin Achengli <0619883460@uma.es>
%
% This program is free software: you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation, either version 3 of the License, or
% (at your option) any later version.
%
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
%
% You should have received a copy of the GNU General Public License
% along with this program; see the file COPYING.  If not, see
% <https://www.gnu.org/licenses/>.
%
% ======================================================================
%



% Experimentation of the funcionality of determinant.oct function

% real matrix 4x4 with random numbers distributed as uniform distribution from -10 to 10 
mat = 20*rand(4) - 10;
% complex matrix 4x4 with random numbers distributed as uniform distribution from -10 to 10
cmat = mat + i*20*rand(4) - 10*i;
% native implementation of determinant
rnativedet = det(mat);
cnativedet = det(cmat);
% self implementation of determinant
rdeterminant = determinant(mat);
cdeterminant = determinant(cmat);

% comparing the results: 
disp("Real Matrix determinants results: native vs self implementation");
disp(["native: ",num2str(rnativedet)," vs self impl: ",num2str(rdeterminant)]);
disp("Complex Matrix determinants results: native vs selt implementation");
disp(["native: ",num2str(cnativedet)," vs selt impl: ",num2str(cdeterminant)]);


