#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> svec = {"a1", "b2", "c3", "d4", "e5"};
    auto pbegin = svec.begin();
    //cout << *pbegin++ << endl;
    //cout << *pbegin << endl;
    //cout << *pbegin.empty() << endl;
    //cout << pbegin->empty() << endl;
    //cout << ++*pbegin << endl;
    cout << pbegin++->empty() << endl;
    return 0;
}
