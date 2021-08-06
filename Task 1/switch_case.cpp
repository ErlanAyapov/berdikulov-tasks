#include <iostream>

using namespace std;

int main() {
	unsigned short int mounth;
	
	cout << "Enter mounth number: "; cin >> mounth;
	switch ( mounth ) {
		case 1: cout << "Qantar" ;break;
		case 2: cout << "Aqpan"; break;
		case 3: cout << "Naurys";break;
		case 4: cout << "Sauir";break;
		case 5: cout << "Mamyr";break;
		case 6: cout << "Mausym";break;
		case 7: cout << "Shilde";break;
		case 8: cout << "Tamys";break;
		case 9: cout << "Qyrquieq";break;
		case 10: cout << "Qazan";break;
		case 11: cout << "Qarasha";break;
		case 12: cout << "Jeltoqsan";break;
	}
	
	return 0;
}

