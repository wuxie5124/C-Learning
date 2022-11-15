#include <iostream>
//4.17
int main417() {
	using namespace std;
	//int higgens = 5;
	//int *pt = &higgens;
	//cout << "Value of higgens = " << higgens
	//	<< ";Address of higgens =" << &higgens << endl;
	//cout << "Value of *pt = " << *pt
	//	<< ";Address of pt" << pt << endl;
	int nights = 1001;
	int *pt = new int;
	*pt = 1001;
	cout << "nights value = " << nights << " :location " << &nights << endl;
	cout << "int value = " << *pt << " :location = " << pt << endl;
	double *pd = new double;

	*pd = 10000001.0;
	cout << "double value = " << *pd << " :location = " << pd << endl;
	cout << "location of pointer pd :" << &pd << endl;
	cout << "size of pd =" << sizeof(pd) ;
	cout << " :size of *pd = " << sizeof *pd << endl;
	cout << "size of pt = " << sizeof(pt);
	cout << " :size of *pt = " << sizeof *pt << endl;
	system("pause");
	return 0;
}