/*
 * parse.cc
 *
 *  Created on: Feb 25, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv) {

	string inputFileName = "stats.txt";
	ifstream fp;

	fp.open(inputFileName.c_str());

	if (!fp.is_open()) {	//If file could not be opened
		cerr << "File cannot be opened" << endl;
		return 1;
	}

	while (fp) {
		string line;
		int population;
		getline(fp, line, ':');
		fp >> population;
		fp >> ws;	//Read the white space
		if (!fp) {
			break;
		}
		cout << line << "--" << population << endl;
	}

	fp.close();

	return 0;
}

