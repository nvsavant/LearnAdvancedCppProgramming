#include <iostream>
#include <exception>

using namespace std;

class canGoWrong {
private:
	char *ptr;

public:
	canGoWrong() {
		ptr = new char[10000000000];
	}

	~canGoWrong() {
		delete[] ptr;
	}

};

int main(int argc, char **argv) {
	try {
		canGoWrong example;
	} catch (bad_alloc &e) {
		cout << e.what() << endl;
	}

	return 0;
}
