#include <iostream>
using namespace std;
void myabs(int i){
    if(i>0) {
        cout << i << endl;
    }else {
        cout << -i << endl;
    }
}

int main() 
{
    myabs(29);
    return 0;
}
