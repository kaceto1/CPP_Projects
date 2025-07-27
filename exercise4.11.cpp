#include<iostream>
#include<string>
using namespace std;

string mixing(string a) {
	string ausgang{ "" };
	int gerade, ungerade;
	if (a.size() % 2 == 0) {
		gerade = a.size() / 2;
		ungerade = gerade;
	}
	else {
		gerade = a.size() / 2 + 1;
		ungerade = a.size() / 2;
	}
	int i{ 0 }, j{ 1 };
	while (i < ungerade) {
		ausgang.push_back(a.at(j));
		j += 2;
		++i;
	}
	int m;
	if (gerade == ungerade) {
		m = a.size() - 2;
	}
	else {
		m = a.size() - 1;
	}
	while (i < a.size()) {
		ausgang.push_back(a.at(m));
		m -= 2;
		++i;
	}
	return ausgang;
}

int main() {
	bool more{ true };
	while (more) {
		string eingang;
		cout << "Geben Sie bitte etwas ein!" << endl << "Eingabe: ";
		cin >> eingang;
		cout << "Ausgabe: " << mixing(eingang) << endl;
		cout << "Wollen Sie eine weitere Berechnung durchfuehren?" << endl;
		char answer;
		cin >> answer;
		more = answer == 'j';
		cout << endl;
	}
	return 0;
}