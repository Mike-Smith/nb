/*
 * NBmatrix.cpp
 *
 *  Created on: Nov 30, 2012
 *      Author: yun
 */

#include "Matrix.h"

namespace NB {

Matrix::Matrix() {
	dim1=0;
	dim2=0;
	m=0;
}

int Matrix::create(int dim1, int dim2) {
	if( dim1==0 || dim2==0) return 0;
	m=new double [dim1*dim2];
	return 0;
}

Matrix::~Matrix() {
	if (m!=0) delete m;
}
double* Matrix::getM() const {
	return m;
}
} /* namespace NB */


