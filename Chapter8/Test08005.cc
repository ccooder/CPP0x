#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main(){
	ifstream in("/home/king/C++/8/1");
	istream &i = in;
	vector<string> v1;
	string word;
	while(i >> word) {
		v1.push_back(word);
	}
	for(auto w : v1){
		cout << w << endl;
	}
	return 0;
}
