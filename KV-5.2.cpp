#include<iostream>
#include<vector>
using namespace std;

void giveVector(vector<int> b, int i) {
	if ((i-1)==0) {
		cout << "{";
	}
	if ((i-1)==b.size()) {
		cout << "}";
	}
	cout << b.at(i - 1);
	if ((i-1) < b.size() - 1) {
		cout << ", ";
	}
	if ((i-1)<b.size()) {
		giveVector(b, i + 1);
	}
}

vector<int> switchPairs(vector<int> a, int n) {
	if (n >= a.size()) {
		return a;
	}
	int help = a.at(n);
	a.at(n) = a.at(n - 1);
	a.at(n - 1) = help;
	return switchPairs(a, n + 2);
}

int main() {
	int j{ 1 };
	vector<int> Ausgangsvector;
	cout << "Geben Sie ein paar ganze Zahlen ein!" << endl;
	bool more{ true };
	while (more) {
		int number;
		cin >> number;
		Ausgangsvector.push_back(number);
		cout << "Wollten Sie noch eine Zahl, dann waehlen Sie j: ";
		char answer;
		cin >> answer;
		more = answer == 'j';
	}
	vector<int> Ergebnisvector = switchPairs(Ausgangsvector, j);
	cout << "Ausgangsvector: ";
	giveVector(Ausgangsvector, j);
	cout << "Ergebnisvector: ";
	giveVector(Ergebnisvector, j);
	return 0;
}