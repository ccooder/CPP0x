#include <iostream>

using namespace std;
int j = 0;
int main() {
	const int i = 0;
	int k = 0;
	constexpr int *crp = &j;
	constexpr const int *crpc = &j;
	const int *pc = &k;
	int *const cp = &k;
	//pc = nullptr;
	*cp = 1;
	const int *const cpc = &k;
	cout << *pc << endl;
	return 0;
}
