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
	for(intArrOf4 *p = ia; p != ia + 3; p ++) {
		for(int *q = *p; q != *p + 4; q++) {
			cout << *q << " ";
		}
		cout << endl;
	}
	return 0;
}
