#include <iostream>
//µÝ¹éÀý×Ó
void countdown(int n);
int main716() {

	countdown(4);
	system("pause");
	return 0;
}
void countdown(int n) {
	using namespace std;
	cout << "Counting down... " << n << endl;
	if (n > 0) 
		countdown(n - 1);
	cout << n << ": kaboom!\n";

}