/*
 * vector.cc
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <vector>

using namespace std;

void createVectorList(vector<int> &arr, int size) {
	for (int i = 0; i < size; i++) {
		arr.push_back(i);
	}
}

void printVectorList(vector<int> arr) {
	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << endl;
	}
}

int main(int argc, char **argv) {

	vector<int> arr;
	createVectorList(arr, 10);
	printVectorList(arr);
	return 0;
}
