#include<iostream>
using namespace std;

int main() {
	int choice;
	do {
		int num;
		cout << "Geben Sie eine dreistellige Zahl ein!" << endl;
		cin >> num;
		int sum = 0;
		int pnum = num;
		for (int i = 0; i < 3; ++i) {
			sum += pnum % 10;
			pnum /= 10;
		}
		if ((sum % 3) == 0) {
			cout << "Die Ziffersumme der Zahl " << num << " ist: " << sum << " => " << num << " ist durch 3 teilbar." << endl;
		}
		else {
			cout << "Die Ziffersumme der Zahl " << num << " ist: " << sum << " => " << num << " ist durch 3 nicht teilbar." << endl;
		}
		cout << "Waehlen Sie 1 fuer noch einen Versuch und andere Zahl fuer Ende des Programms!" << endl;
		cin >> choice;
		switch (choice) {
		case 0:
			return 0;
		case 1:
			break;
		}
	} while (choice==1);
}