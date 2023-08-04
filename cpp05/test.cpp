#include <iostream>

using namespace std;

int main(void){
	
	try {
		int a, b;
		cin >> a >> b;
		if(a == 0)
			throw ("Can't devid zero");
		else if(b == 0)
			throw (1);
		cout << a / b << endl;
	}
	catch(const char * ex) {
		cout << "1 - " << ex << endl;
	}

}
