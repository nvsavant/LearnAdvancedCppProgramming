/*
 * assignmentOverload.cc
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include <iostream>

using namespace std;

class Test {
private:
	int id;
	string name;

public:
	Test() {
		this->name = "";
		this->id = 0;
	}

	Test(string name, int id) {
		this->name = name;
		this->id = id;
	}

	Test(const Test& other) {
		this->id = other.id;
		this->name = other.name;
	}

	string getName() {
		return this->name;
	}

	int getID() {
		return this->id;
	}

	void setID(int id) {
		this->id = id;
	}

	void setName(string name) {
		this->name = name;
	}

	Test& operator =(const Test& other) {
		this->id = other.id;
		this->name = other.name;
		return *this;
	}

	friend ostream& operator <<(ostream& output, Test& test) {
		output << test.getName() << "," << test.getID();
		return output;
	}

//	friend istream& operator >>(istream& input, Test& test) {
//		char comma;
//		string name;
//		int id;
//		input >> test.getName() >> comma >> test.getID();
//		return input;
//	}

};

int main(int argc, char **argv) {

	Test t1("Nikheel", 26);

	Test t2 = t1;

	cout << t2 << endl;

	return 0;
}
