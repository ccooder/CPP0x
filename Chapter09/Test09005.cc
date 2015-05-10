#include <iostream>
#include<vector>

using namespace std;

vector<int>::iterator search(vector<int>, int);

int main()
{
	vector<int> iv{1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 4;
	auto ele = search(iv, i);
		cout << *ele << " 元素" << endl;
	return 0;
}

vector<int>::iterator search(vector<int> iv, int i) {
	auto begin = iv.begin();
	auto end = iv.end();

	while(begin != end) {
		if(i == *begin) {
			return begin;
		}
		++begin;
	}
	return end;
}
