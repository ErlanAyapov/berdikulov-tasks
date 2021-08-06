#include <iostream>

using namespace std;

int main() {
	short int a, n, d, res = 0;
	unsigned short int i;
	cout << "a, n engis: "; cin >> a >> d;
	if (d <= -1) {
		n = d / -1;
	}
	
	for (i = 1; i <= n; i++) {
		res = res + a;
		cout << a << " + ";
	}
	if (d <= -1 && a >= 1) {
		cout << "= -" << res << endl;
	} else {
		cout << "= " << res << endl;
	}
	
	
	
	return 0;
}
