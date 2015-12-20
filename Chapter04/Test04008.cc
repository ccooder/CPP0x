#include <iostream>

using namespace std;

int main()
{
    unsigned long quiz1 = 0;
    quiz1 |= 1ul << 27;
    cout << quiz1 << endl;
    quiz1 &= ~(1ul << 27);
    cout << quiz1 << endl;
    bool status = quiz1 & (1ul << 27);
    cout << status << endl;
    return 0;
}
