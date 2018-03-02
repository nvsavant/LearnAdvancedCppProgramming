/*
 * vector.cc
 *
 *  Created on: Mar 1, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<string>& vec) {
	for (vector<string>::iterator it = vec.begin(); it != vec.end(); it++) {
		cout << *it << endl;
	}
}

bool comp(string a, string b) {
	return a > b;
}

int main(int argc, char **argv) {
	vector<string> vec;

	vec.push_back("Vishwas");
	vec.push_back("Nikheel");
	vec.push_back("Savant");

//	printVector(vec);

	sort(vec.begin(), vec.end(),comp);
	printVector(vec);

	return 0;
}
