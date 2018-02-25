/*
 * queue.cc
 *
 *  Created on: Feb 25, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <queue>

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

	queue<Test> fifo;

	fifo.push(Test("Nikheel"));
	fifo.push(Test("Vishwas"));
	fifo.push(Test("Savant"));

	while (!fifo.empty()) {
		cout << fifo.front() << endl;
		fifo.pop();
	}

	return 0;
}
