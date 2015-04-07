#include <iostream>

using namespace std;

int main() {
	const int i = 42;
	auto j = i+2;
	auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;

	j= "123";
	k = &i;
	p = &j;
	j2 = "123";
	k2 = "123";
	return 0;
}
