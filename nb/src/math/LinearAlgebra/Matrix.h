/*
 * NBmatrix.h
 *
 *  Created on: Nov 30, 2012
 *      Author: yun
 */
/**This is not supposed to handle mathematical objects itself, it's
 * to become interface to use more sophisticated softwave like lapack
 * blas, odepack and so on. To serve a good interface, it needs to use
 * most common data types, like double, int, array, complex<double>. Any
 * more complex concepts should provide a method to reduce to the basic data
 * types.
 */
#ifndef MATRIX_H_
#define MATRIX_H_


namespace NB{
class Matrix {
public:
	Matrix();
	int create(int dim1, int dim2);
	virtual ~Matrix();
	double* getM() const;
private:
	int dim1,dim2;
	double *m;
};

} /* namespace NB */
#endif /* NBMATRIX_H_ */
