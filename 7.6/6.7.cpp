#include <iostream>
#include <climits>
bool is_int(double);
int main67() {
	using namespace std;
	double num;
	cout << "Yo, dude! Enter a integer Value: ";
	cin >> num;
	while (!is_int(num))
	{
		cout << "Out of range -- please try again";
		cin >> num;
	}
	int val = (int)num;
	cout << "You have enter a integer " << val << "\nBye\n";
	system("pause");
	return 0;
}
bool is_int(double x) {
	if (x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}