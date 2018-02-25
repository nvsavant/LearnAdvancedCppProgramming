/*
 * customVector.cc
 *
 *  Created on: Feb 25, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Test {
private:
	string name;
public:
	Test() {
		this->name = "";
	}
	Test(string name) {
		this->name = name;
	}

	~Test() {

	}

	bool operator <(const Test& test) {
		return this->name < test.name;
	}

	friend ostream& operator <<(ostream& output, const Test& test) {
		output << test.name;
		return output;
	}
	friend bool comp(const Test& a, const Test& b);
};
bool comp(const Test& a, const Test& b) {
	return a.name < b.name;
}

int main(int argc, char **argv) {
	vector<Test> arr;

	arr.push_back(Test("Vishwas"));
	arr.push_back(Test("Nikheel"));
	arr.push_back(Test("Savant"));

	for (vector<Test>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << endl;
	}

	sort(arr.begin(), arr.end(), comp);

	for (vector<Test>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}
