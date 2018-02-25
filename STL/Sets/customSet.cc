/*
 * customSet.cc
 *
 *  Created on: Feb 25, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <set>
using namespace std;

class Test {
private:
	string name;
	int age;
public:

	Test(string name, int age) {
		this->age = age;
		this->name = name;
	}

	int getAge() {
		return this->age;
	}

	friend bool operator<(const Test& first, const Test& second) {
		if (first.name == second.name) {
			return first.age < second.age;
		} else {
			return first.name < second.name;
		}
	}

	friend ostream& operator <<(ostream& output, const Test& test) {
		output << test.name << "," << test.age;
		return output;
	}

};

int main(int argc, char **argv) {
	set<Test> uniqueList;

	uniqueList.insert(Test("Nikheel", 26));
	uniqueList.insert(Test("Savant", 25));

	for (set<Test>::iterator it = uniqueList.begin(); it != uniqueList.end();
			it++) {
		cout << *it << endl;
	}

	return 0;
}

