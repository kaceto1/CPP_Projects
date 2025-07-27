#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	if (a % b == 0) {
		cout << b << " teilt " << a << endl;
	}
	else {
		cout << b << " teilt " << a << " nicht" << endl;
	}
	return 0;
}