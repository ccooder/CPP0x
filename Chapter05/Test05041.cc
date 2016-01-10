#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec;
    int i;
    while(cin >> i) {
        ivec.push_back(i);
    }
    for(auto beg=ivec.begin(); beg != ivec.end() && *beg >= 0; beg++);
    if(beg == ivec.end()) {
        cout << "The all elements in ivec greater than or equal to zero"<< endl;
    }
    return 0;
}
