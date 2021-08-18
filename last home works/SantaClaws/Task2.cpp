#include <iostream>

using namespace std;

int main() {
	
	bool run = true;
	short int X, Y, Z, W, D = 0, i = 0;
	
//	X манын аламыз
	cout << "Engis - X |"; cin >> X;
	if (1 <= X | X > 100) {
		cout << "Qate! X\nEngisu formaty 1 > jane < 100";
		return 0;
	}
	
//	Y манын енгіз
	cout << "Engis - Y |"; cin >> Y;
	if (1 < Y || 100 < Y) {
		cout << "Qate! \nEngisu formaty 1 > jane < 1000";
		return 0;
	}
	
//	Z манын енгіз
	cout << "Engis - Z |"; cin >> Z;
	if (X <= 1 && X >= 100) {
		cout << "Qate! \nEngisu formaty 1 > jane < 1000";
		return 0;
	}
	
//	w манын аламыз
	cout << "Engis - W |"; cin >> W;
	if (W <= 1 && W >= 1000) {
		cout << "Qate! \nEngisu formaty 1 > jane < 1000";
		return 0;
	}
		
	while (run) {
//		D га Х косып і манын 1 ге арттырамыз егер D >= W болса проганын токтатып і манын экранга шыгарамыз
		D = D + X;
		i++;
		if (D >= W) {
			cout << i;
			return 0;
		}
		
//		D га Y косып і манын 1 ге арттырамыз егер D >= W болса проганын токтатып і манын экранга шыгарамыз
		D = D + Y;
		i++;
		if (Y >= W) {
			cout << i;
			return 0;
		}
		
//		D га Z косып і манын 1 ге арттырамыз егер D >= W болса проганын токтатып і манын экранга шыгарамыз
		D = D + Z;
		i++;
		if (D >= W) {
			cout << i;
			return 0;
		}	
	}
	return 0;
}
