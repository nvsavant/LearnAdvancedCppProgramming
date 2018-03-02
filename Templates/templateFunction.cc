/*
 * templateFunction.cc
 *
 *  Created on: Mar 2, 2018
 *      Author: nvishwas
 */


#include <iostream>

using namespace std;


template<class T>
void print(T obj){
	cout<<obj<<endl;
}


int main(int argc, char **argv) {
	print("Nikheel");
	print(123);

	return 0;
}
