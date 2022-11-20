#include <iostream>
enum {red,orange,yellow,green,blue,violet,indigo};
int main611() {
	using namespace std;
	cout << "Enter color code (0-6): ";
	int code;
	cin >> code;
	while (code >= red && code <= indigo) {
		switch (code) {
		case red:cout << "This is red.\n"; break;
		case orange:cout << "This is orange.\n"; break;
		case yellow:cout << "This is yellow.\n"; break;
		case green:cout << "This is green.\n"; break;
		case blue:cout<<"This is blue.\n"; break;
		case violet:cout << "This is violet.\n"; break;
		case indigo:cout << "This is indigo.\n"; break;
		}
		cout<< "Enter color code (0-6): ";
		cin>> code;
	}
	system("pause");
	return 0;
}