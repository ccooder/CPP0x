#include <iostream>
#include <string>

using namespace std;

int main() {
    int b = 0;
    switch(b) {
    case 1 :
        string file_name;
        int ival;
        int jval;
        cout << ival << endl;
        break;
    case 0 :
        jval = 1;
        cout << jval << endl;
        if(file_name.empty()) {
            cout << "file_name is empty!" << endl;
        }else {
            cout << "file_name is not empty =" << file_name << endl;
        }
    }
    return 0;
}
