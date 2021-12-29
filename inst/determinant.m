%
% determinant.m
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

function d = determinant(M)
% d = determinant(M) 
%
% this function makes the determinant of a square matrix with recursive method
% depends from reduced.m
det = 0;
d = size(M);
if(d(1) ~= d(2))
error("Matrix must be square");
return;
end

if(length(M) >2)

for it = 1:length(M)
det+=((-1)^it)*M(it,1)*determinant(reduced(M,it,1));
end

else 
det= M(1,1)*M(2,2)  - M(2,1)*M(1,2);
end

end
