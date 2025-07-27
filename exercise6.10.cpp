#include<iostream>
#include<vector>
using namespace std;

int remove_Duplicates(vector<int> a) {
	vector<int> bereinigt{ a.at(0) };
	for (size_t i{ 1 }; i < a.size(); ++i) {
		int m{ 0 };
		for (size_t j{ 0 }; j < i; ++j) {
			if (a.at(i)==a.at(j)) {
				m++;
			}
		}
		if (m==0) {
			bereinigt.push_back(a.at(i));
		}
	}
	cout << "Ergebnisvektor: {";
	for (size_t p{ 0 }; p < bereinigt.size(); ++p) {
		cout << bereinigt.at(p);
		if (p<bereinigt.size()-1) {
			cout << ", ";
		}
	}
	cout << "}" << endl << "Anzahl von Duplikaten: ";
	if (static_cast<double>(bereinigt.size()) / static_cast<double>(a.size()) < 0.1)
		throw runtime_error("Duplikate sind zu viel!");
	return a.size()- bereinigt.size();
}

int main() {
	vector<int> numbers;
	int no_numbers;
	while (cin >> no_numbers) {
		for (int i{ 0 }; i < no_numbers; ++i) {
			int n;
			cin >> n;
			numbers.push_back(n);
		}
	}
	cout << remove_Duplicates(numbers);
	return 0;
}