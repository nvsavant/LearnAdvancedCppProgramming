/*
 * complex.cc
 *
 *  Created on: Feb 25, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(int argc, char **argv) {
	map<string, vector<int> > scores;

	scores["Nikheel"].push_back(10);
	scores["Nikheel"].push_back(20);
	scores["Vishwas"].push_back(10);

	for (map<string, vector<int> >::iterator it = scores.begin();
			it != scores.end(); it++) {
		string tmpStr = it->first;
		vector<int> tmpVector = it->second;
		cout << tmpStr << ":";
		for (vector<int>::iterator it2 = tmpVector.begin();
				it2 != tmpVector.end(); it2++) {
			cout << *it2 << " ";
		}
		cout << endl;
	}

	return 0;
}
