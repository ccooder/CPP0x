#include <iostream>
using namespace std;

void swap(int *p, int *q) {
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int a = 1;
    int b = 2;
    cout << "Before swap:\na=" << a << ",b=" << b << endl;
    swap(&a, &b);
    cout << "After swap:\na=" << a << ",b=" << b << endl;
    return 0;
}
