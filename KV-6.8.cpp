#include<iostream>
#include<stdexcept>
#include<string>
using namespace std;

int umordnen(string a, int b) {
	if (b<0 || b>=a.size()) {
		throw runtime_error("illegale Werte!");
	}
	string help;
	int i{ 0 }, position{ 0 };
	int j{ b };
	while (b<a.size() && i<j) {
		if (position%2==0) {
			help.push_back(a.at(i));
			cout << help.at(i);
			i++;
		}
		else {
			help.push_back(a.at(b));
			cout << help.at(b);
			b++;
		}
		position++;
	}
	if (j*2==a.size()) {
		return 0;
	}
	else {
		if (i==j) {
			while (b<a.size()) {
				help.push_back(a.at(b));
				cout << help.at(b);
				b++;
			}
			return a.size() - 2 * j;
		}
		else {
			while (i < j) {
				help.push_back(a.at(i));
				cout << help.at(i);
				i++;
			}
			return 2 * j - a.size();
		}
	}
}

int main() {
	string name;
	int number;
	cout << "Geben Sie irgendwelchen Text und dann eine Zahl ein!" << endl;
	cin >> name;
	cin >> number;
	cout << umordnen(name, number);
	return 0;
}