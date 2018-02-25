/*
 * stack.cc
 *
 *  Created on: Feb 25, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <stack>

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

	friend ostream& operator <<(ostream& output, const Test& test) {
		output << test.name;
		return output;
	}
};

int main(int argc, char **argv) {

	stack<Test> stackPile;

	stackPile.push(Test("Nikheel"));
	stackPile.push(Test("Vishwas"));
	stackPile.push(Test("Savant"));

	while (!stackPile.empty()) {
		cout << stackPile.top() << endl;
		stackPile.pop();
	}

	return 0;
}
