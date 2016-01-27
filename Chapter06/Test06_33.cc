#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> ivec, int size) {
    if(size > 0) {
        printVector(ivec, size-1);
    }
    cout << ivec[size] << " ";
}

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    printVector(ivec, ivec.size()-1);
    cout << endl;
    return 0;
}
