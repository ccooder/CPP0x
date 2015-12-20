#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto cnt = ivec.size();
    cout << "cnt=" << cnt << endl;
    for(decltype(cnt) ix =0; ix != ivec.size(); ix++,--cnt) {
        ivec[ix] = cnt;
    }
    for(auto i : ivec) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
