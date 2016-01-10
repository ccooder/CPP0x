#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    int num1, num2;
    while(cin >> num1 >> num2) {
        try{
            if(num2 == 0) {
                throw runtime_error("The divide number can't eq 0");
            }else {
                cout << num1 / num2 << endl;
            }
        }catch(runtime_error e) {
            cout << e.what()
            << "\nTry again? \'y\' or \'n\':" 
            << endl;
            string opt;
            cin >> opt;
            if(!cin || opt != "y") {
                break;   
            }
        }
    }
    return 0;
}
