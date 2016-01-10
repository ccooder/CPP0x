#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec1{1, 1, 2, 3};
    vector<int> ivec2{1, 1, 2, 3, 5, 8};
    if(ivec1.size() > ivec2.size()) {
        cout << "The ivec1 is not prefix of ivec2" << endl;
    }else {
        auto beg2 = ivec2.begin();
        auto beg1 = ivec1.begin();
        for(; beg1 != ivec1.end() && *beg1 == *beg2; ++beg1, ++beg2);
        if(beg1 == ivec1.end()) {
            cout << "The ivec1 is prefix of ivec2" << endl;
        }else {
            cout << "The ivec1 is not prefix of ivec2" << endl;
        }
    }
    return 0;
}
