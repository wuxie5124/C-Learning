#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
//4.20
int main420() {

	using namespace std;

	char animals[20] = "bear";
	const char* bird = "wren";
	char *ps;
	cout << animals << " and ";
	cout << bird << "\n";
	cout << "Enter a animal name: ";
	cin >> animals;
	ps = animals;
	cout << ps << "!\n";
	cout << "Before using strcpy()£º";
	cout << animals << " at " << (int *)animals << endl;
	cout << ps << " at " << (int *)ps << endl;

	ps = new char[strlen(animals) + 1];
	strcpy(ps, animals);
	cout << "After using strcpy(): \n";
	cout << animals << " at " << (int *)animals << endl;
	cout << ps << " at " << (int *)ps << endl;
	delete[] ps;
	system("pause");
	return 0;
}