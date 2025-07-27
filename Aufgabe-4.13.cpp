#include<iostream>
using namespace std;

int dec(int n);
int main()
{
	int n;
	cout << "Geben Sie eine Dezimalzahl ein!" << endl;
	cin >> n;
	cout << "Die Binaerzahl von " << n << " ist " << dec(n);
	return 0;
}

int dec(int n)
{
	int bin{ 0 }, i{ 1 };
	while (n != 0)
	{
		bin = bin + (n % 2) * i;
		n = n / 2;
		i = i * 10;
	}
	return bin;
}