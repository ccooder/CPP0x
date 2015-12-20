#include <iostream>
using namespace std;

int main()
{
    const char *cp = "Hello World";
    if(cp && *cp) {
        cout << true << endl;
        cout << cp << endl;
        cout << *cp << endl;
    }else {
        cout << false << endl;
    }
}
