/*
 * customMap.cc
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <map>
using namespace std;

class Person {
private:
	string name;
	int age;
public:

//	Person() {
//		this->name = "";
//		this->age = 0;
//	}

	Person(const Person& other) {
		this->name = other.name;
		this->age = other.age;
	}

	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}

	void setName(string name) {
		this->name = name;
	}

	void setAge(int age) {
		this->age = age;
	}

	string getName() {
		return this->name;
	}

	int getAge() {
		return this->age;
	}

	bool operator <(const Person& other) const {
		if (this->name == other.name) {
			return this->age < other.age;
		}
		return this->name < other.name;
	}

};

ostream &operator <<(ostream& output, Person& person) {
	output << "[" << person.getName() << " , " << person.getAge() << "]";
	return output;
}

void printMap(map<Person, int>& person) {
	for (map<Person, int>::iterator it = person.begin(); it != person.end();
			it++) {
//		cout << it->first << " : " << it->second << endl;
		cout << it->second << endl;
	}
}

int main(int argc, char **argv) {

	map<Person, int> person;

//	person.insert(make_pair(Person("Nikheel", 26), 0));
//	person.insert(make_pair(Person("Guru", 23), 1));

	person[Person("Nikheel", 26)] = 0;
	person[Person("Guru", 23)] = 1;

	printMap(person);

	return 0;
}
