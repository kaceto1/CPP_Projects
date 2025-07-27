#include<iostream>
using namespace std;

double division(double f, int h) {
	while (h) {
		f *= 10;
		--h;
	}
	return f;
}

void convert(int a, int g) {
	while (g) {
		switch (a / g) {
		case 0:
			cout << "null";
			break;
		case 1:
			cout << "eins";
			break;
		case 2:
			cout << "zwei";
			break;
		case 3:
			cout << "drei";
			break;
		case 4:
			cout << "vier";
			break;
		case 5:
			cout << "fuenf";
			break;
		case 6:
			cout << "sechs";
			break;
		case 7:
			cout << "sieben";
			break;
		case 8:
			cout << "acht";
			break;
		case 9:
			cout << "neun";
			break;
		}
		if (g>1) {
			cout << "-";
		}
		a %= g;
		g = g / 10;
	}
}

int count_digit_num(int b, int c) {
	while (b) {
		c++;
		b /= 10;
	}
	return c;
}

int main() {
	int choice;
	do {
		double n;
		cout << "Geben Sie eine positive Zahl ein!" << endl;
		cin >> n;
		int m{ static_cast<int>(n) };
		int count_m{ count_digit_num(m,0) };
		int division_m{ static_cast<int>(division(0.1,count_m)) };
		convert(m, division_m);
		if (static_cast<int>(n) == n) {
			return 0;
		}
		else {
			cout << "-komma";
			do {
				cout << "-";
				double nachkommazahl{ n - static_cast<int>(n) };
				int m1{ static_cast<int>(nachkommazahl * 10) };
				convert(m1,1);
				n *= 10;
			} while ((static_cast<int>(n) / n) != 1.);
		}
		cout << endl << "Waehlen Sie 1 fuer noch einen Versuch und andere Zahl fuer Ende des Programms! ";
		cin >> choice;
		cout << "" << endl;
	} while (choice == 1);
	return 0;
}