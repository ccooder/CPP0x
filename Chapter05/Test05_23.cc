#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    int num1, num2;
    if(cin >> num1 >> num2) {
        cout << num1 / num2 << endl;
    }
    return 0;
}
