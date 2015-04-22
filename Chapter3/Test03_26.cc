#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> text{"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
	auto beg = text.begin();
	auto end = text.end();
	string sought = "3";
	if(beg != end){
		auto mid = beg + (end - beg) / 2;
		int count = 1;
		while(mid != end && *mid != sought) {
			++count;
			if(sought < *mid) {
				end = mid;
			}else {
				beg = mid + 1;
			}
			mid = beg + (end -beg) / 2;
		}
		if(mid == end) {
			cout << "The sought is not exists in text" << endl;
		}else {
			cout << "The sought position is " << mid - text.begin() << endl;
			cout << "Seek count is " << count << endl;
		}
	}
	return 0;
}
