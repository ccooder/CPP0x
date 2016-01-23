#include "Chapter6.h"

int main()
{
    int i=5;
    cout << "5!=" << factorial(i) << endl;
    return 0;
}

int factorial(int i) {
    int result = 1;
    while(i > 1) {
        result *= i--;
    }
    return result;
}
