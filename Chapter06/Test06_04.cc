#include <iostream>
using namespace std;
int i;
int factorial(int i){
    int ret = 1;
    while(i > 1) {
        ret *= i;
        --i;
    }
}

int main()
{
    int i = 0;
    cout << "Please input a number:";
    cin >> i;
    cout << i << "! = "
        << factorial(i) << endl;
    return 0;
}
