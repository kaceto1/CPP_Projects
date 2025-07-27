#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cout << "Berechnung der Gleichung x*x + p*x + q = 0" << endl;
	int choice;
	do {

		double p, q, x;
		cout << "" << endl << "Geben Sie Werte fuer p und q ein!" << endl;
		cout << "p: ";
		cin >> p;
		cout << "q: ";
		cin >> q;
		if (p == 0) {
			if (q == 0) {
				cout << "x1 = x2 = 0" << endl;
			}
			else {
				if (q > 0) {
					cout << "x1 = -i*" << sqrt(q) << endl;
					cout << "x2 = i*" << sqrt(q) << endl;
				}
				else {
					cout << "x1 = " << -sqrt(-q) << endl;
					cout << "x2 = " << sqrt(-q) << endl;
				}
			}
		}
		else {
			if (q == 0) {
				cout << "x1 = 0" << endl;
				cout << "x2 = " << -p << endl;
			}
			else {
				double d{ p * p - 4 * q };
				if ((d) >= 0) {
					if ((d) == 0) {
						cout << "x1 = x2 = " << -p / 2 << endl;
					}
					else {
						cout << "x1 = " << (-p / 2) + (sqrt(d) / 2) << endl;
						cout << "x2 = " << (-p / 2) - (sqrt(d) / 2) << endl;
					}
				}
				else {
					cout << "x1 = " << -p / 2 << "-i*" << sqrt(-d) / 2 << endl;
					cout << "x1 = " << -p / 2 << "+i*" << sqrt(-d) / 2 << endl;
				}
			}
		}
		cout << "Waehlen Sie 1 fuer noch einen Versuch und andere Zahl fuer Ende des Programms!" << endl;
		cin >> choice;

	} while (choice == 1);
	return 0;
}