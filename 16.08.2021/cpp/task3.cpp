#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string str;
	cout << "Enter: "; cin >> str;
	if(str.length() == 3)
		cout <<  str.substr(1, 2 )<< str.substr(0, 1 ) << endl;		
	else 
		cout << "3 tanbali man engiz";
	
	return 0;
}
