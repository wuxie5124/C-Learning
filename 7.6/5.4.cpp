#include <iostream>
const int ArSize = 16;
int main54(){ 
	long long factories[ArSize];
	factories[0] = factories[1] = 1LL;
	for (int i = 2; i < ArSize; i++)
		factories[i] = i * factories[i - 1];
	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << factories[i] << std::endl;
	system("pause");
	return 0;
}