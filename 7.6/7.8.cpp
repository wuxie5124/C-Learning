#include <iostream>
const int ArrSize= 8;
int sum_arr(const int *begin, const int *end);
int main78() {
	using namespace std;
	int cookies[ArrSize] = { 1,2,4,8,16,32,64,128 };
	int sum = sum_arr(cookies, cookies + ArrSize);
	cout << *cookies;
	cout << "Total cookies eaten: " << sum << endl;
	sum = sum_arr(cookies, cookies + 3);
	cout << "First three eaten: " << sum << endl;
	system("pause");
	return 0;
}
int sum_arr(const int *begin, const int *end) {
	const int  * pt;
	int total = 0;
	for (pt = begin; pt != end; pt++) {
		total = total + *pt;
	}
	return total;
}