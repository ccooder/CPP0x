#include <iostream>

using namespace std;

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int arr1[] = {0, 1, 2, 3, 4, 5};
	auto b = begin(arr);
	auto b1 = begin(arr1);
	auto e = end(arr);
	auto e1 = end(arr1);
	cout << "arr's length is " << e-b << endl;
	cout << "arr1's ength is " << e1-b1 << endl;
	bool f = false;
	int count = 0;
	if((e-b) == (e1-b1)) {
		while(b != e) {
			++count;
			if(*b != *b1){
				cout << "Two arrays is not equality" << endl;
				return 0;
			}else {
				++b;
				++b1;
			}
		}	
	}else {
		cout << "Two arrays is not equality" << endl;
		return 0;
	}
	cout << "The loop is run " << count << " times" << endl;
	cout << "Two arrays is equality" << endl;
	return 0;
}
