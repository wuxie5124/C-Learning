#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;
char * getname(void);
int main422() {
	char * name;
	name = getname();
	cout << name << " at " << (int *)name << "\n";
	delete[]name;
	name = getname();
	cout << name << " at " << (int*)name << "\n";
	delete[] name;
	system("pause");
	return 0;
}
char *getname() {
	char temp[80];
	cout << "Enter last name: ";
	cin >> temp;
	char *pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);
	return pn;
}