/*
 * ComplexNum.h
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#ifndef OPERATOROVERLOADING_COMPLEXNUM_H_
#include <iostream>
using namespace std;
#define OPERATOROVERLOADING_COMPLEXNUM_H_


class ComplexNum {
private:
	int real;
	int img;
public:
	ComplexNum();
	ComplexNum(int, int);
	virtual ~ComplexNum();
	friend ostream& operator <<(ostream& output,ComplexNum& number);
	friend ComplexNum& operator +(ComplexNum& first,const ComplexNum& second);
	friend bool operator ==(ComplexNum& first,const ComplexNum& second);
};

#endif /* OPERATOROVERLOADING_COMPLEXNUM_H_ */
