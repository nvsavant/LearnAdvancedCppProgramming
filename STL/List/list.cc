/*
 * list.cc
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <list>

using namespace std;

char printMenu() {
	cout << "Enter a to add" << endl;
	cout << "Enter d to delete" << endl;
	cout << "Enter v to view" << endl;
	char ch;
	cin >> ch;
	return ch;
}

void addToList(list<string> &menuList) {
	cout << "Enter the name to be added on Menu List" << endl;
	string tempStr;
//	getline(cin, tempStr);
	cin >> tempStr;
	menuList.push_back(tempStr);
}

void deleteFromList(list<string> &menuList) {
	if (menuList.size() == 0) {
		cout << "No elements to delete" << endl;
		return;
	}
	cout << "Enter the name to be deleted from the Menu List" << endl;
	string tempStr;
//	getline(cin, tempStr);
	cin >> tempStr;
	menuList.remove(tempStr);
}

void printList(list<string> menuList) {
	if (menuList.size() == 0) {
		cout << "No elements to display" << endl;
		return;
	}
	for (list<string>::iterator it = menuList.begin(); it != menuList.end();
			it++) {
		cout << *it << endl;
	}
}

void printExit() {
	cout << "-ERR shutting down because typed unsupported code" << endl;
}

int main(int argc, char **argv) {
	list<string> menuList;

	while (true) {
		char ch = printMenu();
		switch (ch) {
		case 'a':
			addToList(menuList);
			break;
		case 'd':
			deleteFromList(menuList);
			break;
		case 'v':
			printList(menuList);
			break;
		default:
			printExit();
			return 1;
			break;
		}
	}

	return 0;
}
