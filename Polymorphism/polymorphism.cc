/*
 * polymorphism.cc
 *
 *  Created on: Mar 1, 2018
 *      Author: nvishwas
 */

#include <iostream>

using namespace std;

class Parent {
public:
	//Default constructor
	Parent() {

	}

	//Copy constructor
	Parent(const Parent& other) {

	}

	virtual void print() {
		cout << "Parent class print" << endl;
	}

//	virtual void print() = 0;

	virtual ~Parent() {

	}
};

class Child: public Parent {
public:
	//Default constructor
	Child() {

	}

	//Copy constructor
	Child(const Child& other) {

	}

	void print() {
		cout << "Child class print" << endl;
	}

	~Child() {

	}
};

int main(int argc, char **argv) {

	Child c1;
	Parent *p1 = &c1;
	p1->print();


	//Object Slicing
	Parent p2 = Child();
	p2.print();

	return 0;
}
