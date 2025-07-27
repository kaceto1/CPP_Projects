#include<iostream>
using namespace std;

int main()
{
	int num, fak;
	cout << "Geben Sie eine ganze Zahl ein!" << endl;
	cin >> num;
	fak = num;

	if (num < 0) {
		cout << "Nur positive Zahlen eingeben!";
	}

	else {
		while (num>1) {
			num--;
			fak = fak * num;
		}
		cout << "Fakultaetwert: " << fak;
	}

	return 0;
}