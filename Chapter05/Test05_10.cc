#include <iostream>

using namespace std;

int main()
{
    char c;
    unsigned vowelCnt;
    while(cin >> c) {
        switch(c) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            ++vowelCnt;
            break;
        default:
            break;
        }
    }
    cout << "you inputed " << vowelCnt << " vowels!" << endl;
    return 0;
}
