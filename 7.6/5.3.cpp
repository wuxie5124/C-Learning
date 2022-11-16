#include <iostream>
int main53() {
	using namespace std;
	int x;
	cout << (x = 100) << endl;
	cout << (x < 3) << endl;
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha);
	cout << (x < 3) << endl;
	cout << (x > 3) << endl;
	system("pause");
	return 0;
}