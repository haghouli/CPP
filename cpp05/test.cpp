#include <iostream>

using namespace std;

void	f3() {
	cout << "----5----" << endl;
	throw "Error from f3";
	int *a = new int[10];
	// delete a;
	cout << "----6----" << endl;
}

void	f2() {
	cout << "----3----" << endl;
	f3();
	cout << "----4----" << endl;
}

void	f1() {
	cout << "----1----" << endl;
	f2();
	cout << "----2----" << endl;
}

int main(void){
	try {
		f1();
	} catch(const char * msg) {
		cout << msg << endl;
	}
	system("leaks a.out");
}
