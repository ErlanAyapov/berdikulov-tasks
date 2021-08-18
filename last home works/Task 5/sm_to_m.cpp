#include <iostream>

using namespace std;

int main() {
	short int a;
	cout << "On san engis: "; cin >> a;
	if (a <= -1) {
		cout << "On san engisu kerek edi";
		return 0;
	}
	cout << a / 100 << "-m " << a % 100 << "-sm ";
	
	return 0;
}

