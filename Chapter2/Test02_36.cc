#include <iostream>

using namespace std;

int main() {
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype((b)) d = a;
	++c;
	++d;
	cout << "a=" << a << endl
		<< "b=" << b << endl
		<< "c=" << c << endl
		<< "d=" << d << endl;
	return 0;
}
