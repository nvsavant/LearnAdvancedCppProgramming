/*
 * template.cc
 *
 *  Created on: Mar 1, 2018
 *      Author: nvishwas
 */

#include <iostream>

using namespace std;

template<class T>
class Test {
private:
	T obj;
public:
	Test(T obj) {
		this->obj = obj;
	}

	void print() {
		cout << obj << endl;
	}
};

int main(int argc, char **argv) {

	Test<string> test("Nikheel");

	test.print();

	return 0;
}
