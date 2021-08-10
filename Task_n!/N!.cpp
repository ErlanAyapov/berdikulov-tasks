#include <iostream>

using namespace std;

int main() {
	int i, b, N, x, c = 0;
	cout << "N-| "; cin >> N;
	
	if (N < 1 || N > 200) {
		cout << "200 kishi on san engis";
		return 0;
	}
	
	for (i = 1; i <= N; i++) {
		b = 1;
		for (x = 1; x <= i; x++) {
			b = b * x;		
		}
		c = c + b;
	}
	
	cout << c << endl;
		
	return 0;
}

