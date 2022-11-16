#include <iostream>
int main58() {
	using namespace std;
	double number;
	double sum = 0.0;
	for (int i = 1; i < 5; i++) {
		cout << "Value =" << i << ": ";
		cin >> number;
		sum += number;
	}
	cout << sum << endl;
	cout << sum / 5 << ".\n";
	system("pause");
	return 0;
}