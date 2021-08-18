#include <iostream>
# include "math.h"


using namespace std;

int main() {
	
	short int a, n;
	
	cout << "Eki on san eniz: "; cin >> a >> n;
	
	if (a < 1 || n < 1) {	
		cout << "on san engizu kerek edi :( ";
		return 0;
	};
	
	cout << endl << "a sanynyn n daregesi = " << pow(a, n) ;
	
	
	
	return 0;
}

