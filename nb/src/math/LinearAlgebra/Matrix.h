/*
 * NBmatrix.h
 *
 *  Created on: Nov 30, 2012
 *      Author: yun
 */

#ifndef MATRIX_H_
#define MATRIX_H_


namespace NB{
class Matrix {
public:
	Matrix();
    int view(double *src, int dim1, int dim2);
    int zero();
	virtual ~Matrix();
	double* getd() const;
private:
	int dim1,dim2;
	double *data;
};

} /* namespace NB */
#endif /* NBMATRIX_H_ */
