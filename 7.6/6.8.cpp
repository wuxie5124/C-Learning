#include <iostream>
#include <cctype>

int main68() {
	using namespace std;
	cout << "Enter text for analysis, and type @"
		"to terminate input.\n";
	char ch;
	int whitespace=0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	cin.get(ch);
	while (ch != '@') {
		if (isalpha(ch)) 
			chars++;
		
		else if (isspace(ch)) 
			whitespace++;
	
		else if (isdigit(ch)) 
			punct++;
		
		else if (ispunct(ch)) 
			others++;
		cin.get(ch);
	}
	cout << chars << " letters, ";
	cout << whitespace << " whitespace, ";
	cout << punct << " digits, ";
	cout << others << " other type";
	system("pause");
	return 0;
}