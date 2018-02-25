/*
 * maps.cc
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */
#include <iostream>
#include <map>

using namespace std;

void printExit() {
	cout << "-ERR shutting down because typed unsupported code" << endl;
}

char printDetails() {
	cout << "Enter a to add" << endl;
	cout << "Enter d to delete" << endl;
	cout << "Enter v to view" << endl;
	char ch;
	cin >> ch;
	return ch;
}

void addToMap(map<string, int> &ages) {
	cout << "Enter the name and age to be added on Age Map" << endl;
	string tempStr;
	int tmpAge;
//	getline(cin, tempStr);
	cin >> tempStr;
	cin >> tmpAge;
	ages.insert(pair<string, int>(tempStr, tmpAge));
}

void deleteFromMap(map<string, int> &ages) {
	if (ages.size() == 0) {
		cout << "No elements to delete" << endl;
		return;
	}
	cout << "Elements cannot be deleted" << endl;
//	cout << "Enter the name to be deleted from the Menu List" << endl;
//	string tempStr;
//	cin >> tempStr;
//	ages.
}

void printList(map<string, int> &ages) {
	if (ages.size() == 0) {
		cout << "No elements to display" << endl;
		return;
	}
	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		cout << it->first << " : " << it->second << endl;
	}
}

int main(int argc, char **argv) {
	map<string, int> ages;

	while (true) {
		char ch = printDetails();
		switch (ch) {
		case 'a':
			addToMap(ages);
			break;
		case 'd':
			deleteFromMap(ages);
			break;
		case 'v':
			printList(ages);
			break;
		default:
			printExit();
			return 1;
			break;
		}
	}

	return 0;
}
