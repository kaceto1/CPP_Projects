#include<iostream>
using namespace std;

void swap(int& x, int& y) {
	if (x == 0) {
		if (y == 0) {
			x = 0;
			y = 0;
		}
		else {
			x = y;
			y = 0;
		}
	}
	else {
		if (y == 0) {
			y = x;
			x = 0;
		}
		else {
			x = x * y;
			y = x / y;
			x = x / y;
		}
	}
}

int main() {
	bool more{ true };
	while (more) {
		int x, y;
		cout << "Geben Sie bitte zwei Zahlen ein!" << endl;
		cout << "x: ";
		cin >> x;
		cout << "y: ";
		cin >> y;
		swap(x, y);
		cout << "Die Werte wurden vertauscht!" << endl << "x: " << x << endl << "y: " << y << endl;
		char answer;
		cout << "Fuer noch einen Versuch waehlen Sie j!" << endl;
		cin >> answer;
		more = answer == 'j';
	}
	return 0;
}