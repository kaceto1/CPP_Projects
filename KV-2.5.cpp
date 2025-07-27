#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int choice;
	do {

		double x1, x2, y1, y2, z1, z2;
		cout << "Geben Sie die Koordinaten zwei Punke im dreidimensionalen Raum ein!" << endl;
		cout << "Punkt A" << endl << "x1: ";
		cin >> x1;
		cout << "y1: ";
		cin >> y1;
		cout << "z1: ";
		cin >> z1;
		cout << "" << endl << "Punkt B" << endl << "x2: ";
		cin >> x2;
		cout << "y2: ";
		cin >> y2;
		cout << "z2: ";
		cin >> z2;
		double abstand = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) + (z2 - z1) * (z2 - z1));
		cout << "" << endl << "Der Abstand zwischen A und B ist: " << abstand << endl;
		cout << "Waehlen Sie 1 fuer noch einen Versuch und andere Zahl fuer Ende des Programms." << endl;
		cin >> choice;
		switch(choice){
		case 1:
			cout << "" << endl;
			break;
		case 2:
			return 0;
		}

	} while (choice == 1);
}