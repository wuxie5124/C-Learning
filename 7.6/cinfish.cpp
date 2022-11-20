#include <iostream>
const int Max = 5;
int mainfish() {
	using namespace std;
	double fish[Max];
	cout << "Please enter the weights of your fis.\n";
	cout << "You may enter up to " << Max
		<< " fish <q to teminate>.\n";
	cout << "fish #1:  ";
	int i = 0;
	while (i<Max && cin >> fish[i]) {
		if (++i < Max)
			cout << "fish #" << i + 1 << ": ";
	}
	double total = 0;
	for (int j = 0; j < i; j++) {
		total += fish[j];
		if (i == 0)
			cout << "No fish\n";
		else
			cout << total / i << " = average of weight of "
			<< i << "fish/n";
		cout << " Done./n";
		system("pause");
		return 0;
	}
}