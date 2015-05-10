#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string s("Hello");
	string s1("hello");

	const char ca[] = {'H', 'e', 'l', 'l', 'o', '\0'};
	const char ca1[] = {'h', 'e', 'l', 'l', 'o', '\0'};

	string symbol;
	if(s < s1) {
		symbol = "<";
	}else if(s > s1) {
		symbol = ">";
	}else {
		symbol = "=";
	}
	cout << s << symbol << s1 << endl;
	
	int rs = strcmp(ca, ca1);
	if(0 == rs) {
		symbol = "=";
	}else if(0 < rs) {
		symbol = ">";
	}else {
		symbol = "<";
	}
	cout << ca << symbol << ca1 << endl;

	const int ia[] = {1, 2, 3, 4, 5};
	cout << ia << endl;

	char carr[] = {'a', 'b', 'c', '\0'};
	cout << strlen(carr) << endl;
	strcat(carr, carr);
	cout << carr << endl;

	const char c[] = "Hello";
	return 0;
}
