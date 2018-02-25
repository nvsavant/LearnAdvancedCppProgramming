/*
 * write.cc
 *
 *  Created on: Feb 25, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv) {
	string outputFileName = "test.txt";

	ofstream fp;
	fp.open(outputFileName.c_str());

	if (fp.is_open()) {
		fp << "Hello World!!!" << endl;
		fp << "Welcome Nikheel" << endl;
		fp.close();
	} else {
		cerr << "Could not open file" << endl;
	}

	return 0;
}
