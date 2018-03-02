/*
 * functors.cc
 *
 *  Created on: Mar 1, 2018
 *      Author: nvishwas
 */

#include <iostream>

using namespace std;

class Test {
public:
	virtual bool operator()(const string& test) = 0;

	virtual ~Test() {
	}
};

class MatchTest: public Test {
public:
	bool operator()(const string& test) {
		return test == "lion";
	}
};

void check(string text, Test& test) {
	if (test(text)) {
		cout << "Match found" << endl;
	} else {
		cout << "Match not found" << endl;
	}
}

int main(int argc, char **argv) {

	MatchTest t1;
	check("lion",t1);

	return 0;
}
