#include <iostream>
using namespace std;

int main()
{
    unsigned short quiz1 = 0;
    quiz1 |= 1ul << 27;
    cout << quiz1 << endl;
    quiz1 &= ~(1ul << 27);
    cout << quiz1 << endl;
    return 0;
}
