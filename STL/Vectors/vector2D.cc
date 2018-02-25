/*
 * vector2D.cc
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <vector>
using namespace std;

void create2DVector(vector<vector<int> > &grid, int row, int col) {
	for (int i = 0; i < row; i++) {
		vector<int> localVector;
		for (int j = 0; j < col; j++) {
			localVector.push_back(i + j);
		}
		grid.push_back(localVector);
	}
}

void print2DVector(vector<vector<int> > grid) {
	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid[i].size(); j++) {
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}
}

int main(int argc, char **argv) {
	vector<vector<int> > grid;
	create2DVector(grid, 3, 3);
	print2DVector(grid);
	return 0;
}
