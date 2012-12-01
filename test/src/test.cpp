/*
 * test.cpp
 *
 *  Created on: Nov 30, 2012
 *      Author: yun
 */



#include <iostream>
#include "NB.h"

using namespace NB;
int main()
{
	double *v=new double [4];
	double *m=new double [4*4];
	v[0]=1;
	m[0]=1;
	NB::Matrix a;
	NB::Vector b;
	a.view(m,4,4);
	a.zero();
	b.view(v,4);
	b.zero();
	std::cout<<m[0]<<'\n';
	std::cout<<v[0]<<'\n';
	return 0;
}
