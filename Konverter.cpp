#include<iostream>
#include<vector>
using namespace std;

int division(int a, int b) {
	if (b == 0)
		throw runtime_error("illegal operation");
	int result{ 0 };
	while (a >= b) {
		result++;
		a -= b;
	}
	return result;
}

int count(int n) {
	vector<int> binaerzahl;
	int count{ 0 };
	while (n) {
		binaerzahl.push_back(n % 2);
		if (n % 2 == 1)
			count++;
		n = division(n, 2);
	}
	cout << "Binaerzahl: ";
	for (int i{ static_cast<int>(binaerzahl.size() - 1) }; i >= 0; --i) {
		cout << binaerzahl.at(i);
	}
	cout << endl << "Anzahl der Einsen: ";
	return count;
}

int main() {
	int choice;
	do {
		int n;
		cout << "Geben Sie eine positive ganze Zahl ein!" << endl;
		cin >> n;
		cout << count(n) << endl;
		cout << "Waehlen Sie 1 fuer noch einen Versuch und andere Zahl fuer Ende des Programms!" << endl;
		cin >> choice;
		cout << endl;
	} while (choice == 1);
	return 0;
}