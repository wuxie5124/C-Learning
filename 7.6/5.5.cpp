#include <iostream>
int main55() {
	using std::cout;
	using std::cin;
	using std::endl;
	cout << "Enter a integer: ";
	int by;
	cin >> by;
	cout << "Counting by: " << by << "s:\n";
	for (int i = 0; i < 100; i = i + by)
		cout << i << endl;
	system("pause");
	return 0;
}