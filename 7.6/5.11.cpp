#include <iostream>
#include <cstring>
int main511() {
	using namespace std;
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++){
		cout << word << endl;
	    word[0] = ch;
	}
	cout << "After loop ends,word is " << word << endl;
	system("pause");
	return 0;
}