#include <iostream>

using namespace std;

int main() {
	short int a, n, d, res;
	unsigned short int i;
	cout << "a, n engis: "; cin >> a >> d;
	if (d <= -1) {
		n = d / -1;
		for (i = 1; i <= n; i++) {
			res = res + a;
			cout << a << " + ";
		}
	} else {
		for (i = 1; i <= d; i++) {
			res = res + a;
			cout << a << " + ";
		}
	}
	
	cout << "= " << res << endl;
	
	return 0;
}
