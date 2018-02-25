/*
 * read.cc
 *
 *  Created on: Feb 25, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv) {

	string inputFileName = "test.txt";
	ifstream fp;
	fp.open(inputFileName.c_str());

	if (fp.is_open()) {
		string localStr;
		while (fp) {
			getline(fp, localStr);
			cout << localStr << endl;
		}
		fp.close();
	} else {
		cerr << "File does not exists!!!" << endl;
	}

	return 0;
}
