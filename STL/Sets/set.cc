/*
 * set.cc
 *
 *  Created on: Feb 25, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <set>
using namespace std;

int main(int argc, char **argv) {

	set<string> uniqueList;

	uniqueList.insert("Nikheel");
	uniqueList.insert("Nikheel");
	uniqueList.insert("Savant");
	uniqueList.insert("Vishwas");

	for (set<string>::iterator it = uniqueList.begin(); it != uniqueList.end();
			it++) {
		cout << *it << endl;
	}

	return 0;
}
