/*
 * multiMap.cc
 *
 *  Created on: Feb 25, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <map>
using namespace std;

int main(int argc, char **argv) {

	multimap<int, string> lookup;

	lookup.insert(make_pair(26, "Nikheel"));
	lookup.insert(make_pair(26, "Savant"));

	for (multimap<int, string>::iterator it = lookup.begin();
			it != lookup.end(); it++) {
		cout << it->first << "," << it->second << endl;
	}

	return 0;
}
