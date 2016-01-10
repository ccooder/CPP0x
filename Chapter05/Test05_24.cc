#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    int num1, num2;
    if(cin >> num1 >> num2) {
        if(num2 == 0) {
            throw runtime_error("The divide number can't eq 0");
        }else {
            cout << num1 / num2 << endl;
        }
    }
    return 0;
}
