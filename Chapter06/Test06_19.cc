#include <iostream>
#include <string>

using namespace std;

int fun(const int &i){
    return i;
}

string fun1(const string &s) {
    return s;
}

int main()
{
    cout << fun(43) << endl;
    cout << fun1("string") << endl;
    return 0;
}
