#include <iostream>

using namespace std;

int main()
{
	int ia[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	//cout << ia[2][3] << endl;
	cout << "/========First===========/" << endl;
	for(int (&iaF)[4] : ia) {
		for(int &iaS : iaF) {
			cout << iaS << " ";
		}
		cout << endl;
	}
	cout << "/========Second===========/" << endl;
	for(int i=0; i<3; i++) {
		for(int j=0; j < 4; j++) {
			cout << ia[i][j] << " ";
		}
		cout << endl;
	}
	cout << "/========Third============/" << endl;
	for(int (*p)[4] = ia; p != ia + 3; p++) {
		for(int *q = *p; q != *p+4; q++) {
			cout << *q << " ";
		}
		cout << endl;
	}
	return 0;
}
