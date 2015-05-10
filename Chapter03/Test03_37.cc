#include <iostream>

using namespace std;

int main() 
{
	const char ca[] = {'h', 'e', 'l', 'l', 'o'};
	const char *pa = ca;
	unsigned count = 0;
	cout << (*(ca + 5) == true) << endl;
	while(*pa) {
		++count;
		cout << *pa << " ";
		++pa;
	}
	cout << "loop times: " << count  <<endl;

	int ia[] = {1, 2, 3, 4, 5};
	auto p = ia;
	p = p+6;
	cout << *p << endl;
	while(*p) {
		cout << *p << endl;
		++p;
		//cout << *p << endl;
	}
	return 0;
}
