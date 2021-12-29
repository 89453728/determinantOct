# TESTING OCTAVE DETERMINANT FUNCTION WITH C++ API

The prupose of this repository is only to take experience using the C++ API of octave doing a reducer matrix function and a determinant function which is compatible with complex numbers

This repository is only for educational and fitness prupose, please don't use it as a serious software in any critical project. This software have not any waranty or fidelity to be working good in any case.

## REDUCER

Reducer is a function that is developed into the files reduced.h, reduced.cc into the directory src,  and in octave script function into the inst directory as reduced.m filename.

This function takes three arguments, Matrix where you want to make a reduced matrix from, and two integers which means the row and the column that have been omited. It returns a matrix with one dimension lower in rows and columns than the original matrix.

The function accept real and complex matrix's

## DETERMINANT

Determinant is defined into the files determinant.h determinant.cc into the directory src, and is defined too into the inst directory as determinant.m writed in octave scripting language.

This function takes a real or complex matrix and makes the determinant with a recursive function and then returns a complex number (if you've passed a real matrix, you can only get the real part of it).

This function as you can imagine, accept real and complex matrix.

## C++ files

```
* src directory
	* config.h --> some c++ macros to resolve some issues (not relevant)
	* reduced.h --> reduce declarations
	* reduced.cc --> reduce definitions
	* determinant.h --> determinant declarations
	* determinant.cc --> determinant definitions
	* Makefile --> makefile (explained under this index)
* inst directory
	* determinant.m
	* reduce.m
* examples directory
	* detexp.m --> script made to test the functionality of determinant
	* redexp.m --> as detepx.m but with reduced
* test
	This folder is to test all the functionalities and hold all the object files and .oct files to
```

## making 

To make this repository, type make and will compile all the c++ files into c++ object files and then link all into reduced.oct and determinant.oct which are the dinamically files in octave and which you can use as normal files.

To clean all the object and oct files you must type make clean
