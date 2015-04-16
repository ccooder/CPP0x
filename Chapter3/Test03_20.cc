#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int i = 0;
	vector<int> ivec;
	while(cin >> i) {
		ivec.push_back(i);
	}
	int prev;
	int index = 0;
	cout << "print the sum of each pair adjacent elements:" << endl;
	for(auto cur : ivec){
		if(index == 0) {
			prev =  cur;
		}else {
			cout << prev + cur << " ";
			prev = cur;
		}
		++index;
	}
	cout << endl;
	cout << "print the sum of n and n to last elements:"  << endl;
	int size = ivec.size();
	int middle = size / 2;
	for(int j=0; j<middle; j++) {
		cout << ivec[j] + ivec[size-1-j] << " ";
	}
	if(middle < (size-middle)) {
		cout << ivec[size-middle-1]*2 << endl;
	}else {
		cout << endl;
	}
	return 0;
}
