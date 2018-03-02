/*
 * abstractClasses.cc
 *
 *  Created on: Mar 1, 2018
 *      Author: nvishwas
 */

#include <iostream>

using namespace std;

class Animal {
public:
	virtual void speak() = 0;
	virtual ~Animal(){

	}
};

class Dog: public Animal {
public:
	void speak() {
		cout << "Whof Whof" << endl;
	}

	~Dog() {

	}
};

class Cat: public Animal {
public:
	void speak() {
		cout << "Meow Meow" << endl;
	}

	~Cat() {

	}
};

int main(int argc, char **argv) {

	return 0;
}
