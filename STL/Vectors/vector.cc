/*
 * vector.cc
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;



void createVectorList(vector<int> &arr, int size) {
	srand((unsigned int) time(NULL));
	for (int i = 0; i < size; i++) {
		arr.push_back(rand() % 100);
	}
}

void printVectorList(vector<int> arr) {
	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << endl;
	}
}

int main(int argc, char **argv) {

	vector<int> arr;
	createVectorList(arr, 5);
	printVectorList(arr);


	cout<<"After sorting"<<endl;
	sort(arr.begin(), arr.end());
	printVectorList(arr);

	return 0;
}
