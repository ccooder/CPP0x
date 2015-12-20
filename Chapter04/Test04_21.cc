#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    vector<int> ivec{1,2,3,4,5,6,7,8,9,10};
    for(auto beg=ivec.begin();beg != ivec.end();beg++){
        cout << *beg << " is " 
            << ((*beg % 2 == 0) ? "even" : "odd") 
            << endl;
    }
    return 0;
}
