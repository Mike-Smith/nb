/*
 * NBmatrix.cpp
 *
 *  Created on: Nov 30, 2012
 *      Author: yun
 */

#include "Matrix.h"
#include <iostream>

namespace NB {

Matrix::Matrix() {
	dim1=0;
	dim2=0;
	data=0;
}
Matrix::~Matrix() {
	if (data!=0) delete data;
}
double* Matrix::getd() const {
	return data;
}
int NB::Matrix::view(double* src, int dim1, int dim2) {
	data=src;
	this->dim1=dim2;
	this->dim2=dim2;
	return 0;
}
int NB::Matrix::zero() {
	std::fill_n(data,dim1*dim2,(double)0.0);
	return 0;
}

} /* namespace NB */


