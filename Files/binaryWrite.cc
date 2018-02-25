/*
 * binary.cc
 *
 *  Created on: Feb 25, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push,1)	//To disable struct padding

struct Person {
	char name[50];
	int age;
	double weight;
};

int main(int argc, char **argv) {
	Person someone = {"Nikheel",26,75};
	string outputFileName = "test.bin";
	ofstream fp;
	fp.open(outputFileName.c_str(),ios::binary);


	if(!fp.is_open()){
		cerr<<"Could not open file"<<endl;
	}

	fp.write(reinterpret_cast<char *>(&someone),sizeof(Person));


	fp.close();
	return 0;
}
