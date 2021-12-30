#
# Makefile
#
# Copyright (C) 2020-2021 Yassin Achengli <0619883460@uma.es>
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; see the file COPYING.  If not, see
# <https://www.gnu.org/licenses/>.
#
# ======================================================================
#

OFILES = reduced.o determinant.o
OCTFILES = reduced.oct determinant.oct
G = mkoctfile -g 
FLAGS = -c
TEST = ../test/

all: $(OCTFILES) move

%.oct: %.o
	$(G) $? -o $@

%.o: %.cc
	$(G) $(FLAGS) $?

move: 
	@cp *.o $(TEST)
	@cp *.oct $(TEST)
	
cleantest: 
	@echo "cleaning all mkoctfile files ..."
	@rm $(TEST)*.o $(TEST)*.oct

clean:
	@echo "cleaning src folder" 
	@rm *.oct
	@rm *.o
	@rm .*.un~
	@rm .*.swp
