#include <iostream>

using namespace std;

int main()
{
    char c;
    unsigned vowelCnt;
    while(cin >> c) {
        switch(c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            ++vowelCnt;
            break;
        default:
            break;
        }
    }
    cout << "you inputed " << vowelCnt << " vowels!" << endl;
    return 0;
}
