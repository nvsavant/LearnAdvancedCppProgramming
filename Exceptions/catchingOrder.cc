/*
 * catchingOrder.cc
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <exception>

using namespace std;

void error() {
	bool error1 = true;
	bool error2 = false;

	if (error1) {
		throw bad_alloc();
	}

	if (error2) {
		throw exception();
	}
}

int main(int argc, char **argv) {

	try {
		error();
	} catch (bad_alloc &b) {
		cout << b.what() << endl;
	} catch (exception &e) {
		cout << e.what() << endl;
	}

	return 0;
}
