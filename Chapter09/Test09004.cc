#include <iostream>
#include<vector>

using namespace std;

bool search(vector<int>, int);

int main()
{
	vector<int> iv{1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 10;
	auto exists = search(iv, i);
	cout << "iv集合中" << 
		(exists == true ? "存在 " : "不存在 ") << 
		i << " 元素" << endl;
	return 0;
}

bool search(vector<int> iv, int i) {
	auto begin = iv.begin();
	auto end = iv.end();

	while(begin != end) {
		if(i == *begin) {
			return true;
		}
		++begin;
	}
	return false;
}
