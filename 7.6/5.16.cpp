#include <iostream>
int main516() {
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter characters; enter # to quit: \n";
	cin >> ch;
	while (ch!= '#') {
		cout << ch;
		count++;
		cin >> ch;
	}
	cout << endl << count << " charaters read\n";
	system("pause");
	return 0;
}