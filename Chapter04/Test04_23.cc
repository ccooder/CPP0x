#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "word";
    //string pl = s+s[s.size()-1] == "s" ? "": "s";
    string pl = s+(s[s.size()-1] == 's' ? "": "s");
    cout << pl << endl;

    int x = 3;
    int y = 2;
    int z = x>y ? 100 : ++y > 2 ? 20 : 30;

    cout << "y=" << y
        << endl << "z=" << z << endl;

    s = "high pass";
    cout << (s?"fail" : "pass") << endl;
    return 0;
}
