%
% reduced.m
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



function R =  reduced(M,r,c)
% R = reduced(M,r,c)
%
% takes a matrix and two integers and gives the reduced matrix ommiting the r row and
% the c column
%
if nargin ~= 3
error("reduced must have 3 arguments");
return;
end
s = size(M);
rows = 1:s(1);
cols = 1:s(2);
temp = [];
for it = rows
if(it ~= r)
temp = [temp it];
end
end
rows = temp;
temp = [];
for it = cols
if(it ~= c)
temp = [temp it];
end
end
R = M(rows,temp);
end
