#include <iostream>
const int max = 5;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);
int main77() {
	using namespace std;
	double properties[max];
	int size = fill_array(properties, max);
	show_array(properties, size);
	if (size > 0) {
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	system("pause");
	return 0;
}
int fill_array(double ar[], int limit) {
	using namespace std;
	double temp;
	int i;
	for (i =0;i< limit; i++)
	{
		cout << "Enter  value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp<0)
		  break;
		ar[i] = temp;
	}
	return i;
}
void show_array(const double ar[], int n) {
	using namespace std;
	for (int i =0 ;i<n;i++)
	{
		cout << "Property #" << (i + 1) << ": $";
		cout << ar[i] << endl;
	}
}
void revalue(double r, double ar[], int n) {
	for (int i= 0; i< n;i++)
	{
		ar[i]*= r;
	}
}