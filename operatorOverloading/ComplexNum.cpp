/*
 * ComplexNum.cpp
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include "ComplexNum.h"
#include <stdlib.h>

ComplexNum::ComplexNum() {
	this->real = 0;
	this->img = 0;
}

ComplexNum::ComplexNum(int real, int img) {
	this->real = real;
	this->img = img;
}

ComplexNum::~ComplexNum() {
	// TODO Auto-generated destructor stub
}

ostream& operator <<(ostream& output, ComplexNum& number) {
	output << number.real;
	if (number.img >= 0) {
		output << "+i";
	} else {
		output << "-i";
	}
	output << (int) abs(number.img);
	return output;
}

ComplexNum& operator +(ComplexNum& first, const ComplexNum& second) {
	first.real = first.real + second.real;
	first.img = first.img + second.img;
	return first;
}

bool operator ==(ComplexNum& first, const ComplexNum& second) {
	if (first.real == second.real && first.img == second.img) {
		return true;
	} else {
		return false;
	}
}

ComplexNum& operator*(ComplexNum& number) {
	number.img = (-1) * number.img;

	return number;
}

int main(int argc, char **argv) {

	ComplexNum num1(1, -2);
	cout << num1 << endl;
	cout << *num1 << endl;

	cout << *num1 + ComplexNum(*num1) << endl;
//
//	ComplexNum num2(1, 2);
//	cout << num2 << endl;
//
//	if (num1 == num2) {
//		cout << "Both numbers are equal" << endl;
//	} else {
//		cout << "Both numbers are not equal" << endl;
//	}
//
//	ComplexNum num3 = num1 + num2;
//	cout << num3 << endl;

	return 0;
}

