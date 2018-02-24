/*
 * customException.cc
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <exception>
using namespace std;

class myException: public exception {
public:
	const char* what() const throw () {
		return "Something went wrong";
	}
};

class Test {

public:
	void canGoWrong() {
		throw myException();
	}
};

int main(int argc, char **argv) {
	Test t;
	try {
		t.canGoWrong();
	} catch (myException &e) {
		cout << e.what() << endl;
	}

	return 0;
}

