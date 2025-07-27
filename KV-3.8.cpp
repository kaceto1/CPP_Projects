#include<iostream>
using namespace std;

int main() {
	int choice;
	do {
		int n;
		cout << "Geben Sie eine ganze positive Zahl ein!" << endl;
		cin >> n;
		int summe{ 0 };
		int pow{ 1 };
		for (int t = 1; t <= n; ++t) {
			for (int w = 1; w < t; ++w) {
				pow *= t;
			}
			summe += pow;
			pow = t + 1;
		}
		cout << summe << endl;
		cout << "Waehlen Sie 1 fuer noch einen Versuch und andere Zahl fuer Ende des Programms!" << endl;
		cin >> choice;
	} while (choice == 1);
}