#include<iostream>
using namespace std;

int mult(int m, int n) {
	if (n<0) {
		n = -n;
		m = -m;
	}
	int mult{ 0 };
	while (n) {
		mult+=m;
		--n;
	}
	return mult;
}

int power(int m, unsigned int n) {
	switch (n) {
	case 0:
		return 1;
	case 1:
		return m;
	default:
		int pow{ mult(m, m) };
		while (n > 2) {
			pow = mult(pow, m);
			--n;
		}
		return pow;
	}
}

int main() {
	int choice;
	do {
		int num1, num2;
		cout << "Geben Sie zwei ganze Zahlen ein!" << endl;
		cin >> num1 >> num2;
		cout << num1 << " * " << num2 << " = " << mult(num1, num2) << endl;
		if (num2 >= 0) {
			cout << num1 << " ^ " << num2 << " = " << power(num1, num2) << endl;
		}
		else {
			num2 = -num2;
			cout << num1 << " ^ " << -num2 << " = 1/" << power(num1, num2) << " = " << 1./power(num1, num2) << endl;
		}
		cout << "Waehlen Sie 1 fuer noch einen Versuch und andere Zahl fuer Ende des Programms!" << endl;
		cin >> choice;
		cout << endl;
	} while (choice == 1);
	return 0;
}