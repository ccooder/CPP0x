#include <iostream>

using namespace std;
int max(int i, const int *p) {
    if(i>*p) {
        return i;
    }else {
        return *p;
    }
}
int main()
{
    int i=1;
    int j=2;
    cout << "max number of "<< i << "," << j
        << " is " << max(i,j) << endl;
    return 0;
}
