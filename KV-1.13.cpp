#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Geben Sie drei ganze positive Zahlen ein!" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "Ausgabe: " << c % 10 << b % 10 << a % 10 << a / 10 << b / 10 << c / 10;
	return 0;
}