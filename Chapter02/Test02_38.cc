#include <iostream>

using namespace std;

int main() 
{
	int ci = 42;
	const int &cri = ci;
	int *pi = &ci;

	auto ax = cri + 0;
	decltype(cri+0) dx;

	auto &ap = *pi;
	decltype(*pi) dp = ci;

	ap = 1;

	cout << ci << endl;
	return 0;
}
