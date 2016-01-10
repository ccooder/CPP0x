#include <iostream>
using namespace std;

int call_times() {
    static int count;
    return ++count;
}

int main()
{
    for(int i=0; i<10; ++i) {
        cout << call_times() << endl; 
    }
    return 0;
}
