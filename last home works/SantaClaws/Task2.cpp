#include <iostream>

using namespace std;

int main() {
	
	bool run = true;
	short int X, Y, Z, W, D = 0, i = 0;
	
//	X ����� ������
	cout << "Engis - X |"; cin >> X;
	if (1 <= X | X > 100) {
		cout << "Qate! X\nEngisu formaty 1 > jane < 100";
		return 0;
	}
	
//	Y ����� ����
	cout << "Engis - Y |"; cin >> Y;
	if (1 < Y || 100 < Y) {
		cout << "Qate! \nEngisu formaty 1 > jane < 1000";
		return 0;
	}
	
//	Z ����� ����
	cout << "Engis - Z |"; cin >> Z;
	if (X <= 1 && X >= 100) {
		cout << "Qate! \nEngisu formaty 1 > jane < 1000";
		return 0;
	}
	
//	w ����� ������
	cout << "Engis - W |"; cin >> W;
	if (W <= 1 && W >= 1000) {
		cout << "Qate! \nEngisu formaty 1 > jane < 1000";
		return 0;
	}
		
	while (run) {
//		D �� � ����� � ����� 1 �� ���������� ���� D >= W ����� �������� �������� � ����� ������� ���������
		D = D + X;
		i++;
		if (D >= W) {
			cout << i;
			return 0;
		}
		
//		D �� Y ����� � ����� 1 �� ���������� ���� D >= W ����� �������� �������� � ����� ������� ���������
		D = D + Y;
		i++;
		if (Y >= W) {
			cout << i;
			return 0;
		}
		
//		D �� Z ����� � ����� 1 �� ���������� ���� D >= W ����� �������� �������� � ����� ������� ���������
		D = D + Z;
		i++;
		if (D >= W) {
			cout << i;
			return 0;
		}	
	}
	return 0;
}
