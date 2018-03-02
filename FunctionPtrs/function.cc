/*
 * function.cc
 *
 *  Created on: Mar 1, 2018
 *      Author: nvishwas
 */

#include <iostream>
using namespace std;

void test(void) {
	cout << "Hello World!!!" << endl;
}

int main(int argc, char **argv) {
	//Declaration and Initialization of function Ptr
	void (*funcPtrTest)(void) = test;

	funcPtrTest();

	return 0;
}
