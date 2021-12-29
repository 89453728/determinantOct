%
% redexp.m
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



% reduced experimentation doint a reduction of a real matrix and a complex matrix and
% ploting the results

mat = round(20*rand(4)-10);
cmat = mat + rount(20*i*rand(4) - 10*i);

% making it with native method
nativered = mat(2:end, [1,2,4]);
cnativered = cmat(2:end, [1,2,4]);

% making it with reduced function
red = reduced(mat,1,3);
cred = reduced(cmat,1,3);

% ploting the result

disp("reduce with native method");
disp("real example");
nativered
disp("complex example");
cnativered
disp("reduce with reduced dinamically function");
disp("real example");
red
disp("complex example");
cred



