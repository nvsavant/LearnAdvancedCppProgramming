/*
 * countIf.cc
 *
 *  Created on: Mar 1, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <vector>

using namespace std;

const int LENGTH = 6;

bool match(string text) {
	return text.size() == LENGTH;
}

int countIf(vector<string>& texts, bool (*match)(string)) {
	int returnValue = 0;
	for (vector<string>::iterator it = texts.begin(); it != texts.end(); it++) {
		if (match(*it) == true) {
			returnValue++;
		} else {
			continue;
		}
	}

	return returnValue;
}

int main(int argc, char **argv) {

	vector<string> texts;
	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("four");
	texts.push_back("five");

	//Define the length to be matched as well as function

	bool (*funcPtr)(string) = match;
	cout << countIf(texts, funcPtr) << endl;

	return 0;
}
