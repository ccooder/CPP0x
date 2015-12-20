#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cout << "size of char is " << sizeof (char) << endl;
    cout << "size of pointer is " << sizeof (int *) << endl;
    cout << "size of string is " << sizeof (string) << endl;
    cout << "size of vector is " << sizeof (vector<int>) << endl;
    int arr[]{1,2,3,4,5,6,7,8,9,0};
    int arr1[sizeof(arr)/sizeof(*arr)];
    cout << arr1[9] << endl;
    cout << arr1[10] << endl;
    
    return 0;
}
