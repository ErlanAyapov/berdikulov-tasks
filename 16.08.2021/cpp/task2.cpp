#include <iostream>
# include "math.h"


using namespace std;

int main() {
	short int a, b, c;
	float p;
	
	cout << "a, b, c: "; cin >> a >> b >> c;
	p = (a + b + c) / 2;

	cout <<"s = " << sqrt(p * (p - a) * (p - b) * (p - c));
	
	return 0;
}

