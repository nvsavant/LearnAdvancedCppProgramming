/*
 * basicException.cc
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include <iostream>

using namespace std;

void mightGoWrong() {

	bool error = true;

	if (true == error) {
		throw string("Something went wrong");
	} else {

	}
}

int main(int argc, char **argv) {

	try {
		mightGoWrong();
	} catch (int errorNum) {
		cout << "Error caught" << endl;
	} catch (string &e) {
		cout << "Error message: " << e << endl;
	}
	return 0;
}
