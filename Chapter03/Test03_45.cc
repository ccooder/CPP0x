#include <iostream>

using namespace std;
using intArrOf4 = int[4];
//typedef int intArrOf4[4];
int main()
{
	int ia[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	//cout << ia[2][3] << endl;
	for(auto b = begin(ia); b != end(ia); b++) {
		for(auto b1 = begin(*b); b1 != end(*b); b1++) {
			cout << *b1 << " ";
		}
		cout << endl;
	}
	return 0;
}
