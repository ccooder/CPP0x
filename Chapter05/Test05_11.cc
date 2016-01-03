#include <iostream>

using namespace std;

int main()
{
    char ch;
    unsigned vowelCnt=0, bsCnt=0, tabCnt=0, newlineCnt=0;
    ch = cin.get();
    while((ch = cin.get()) != '0'){
        switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            ++vowelCnt;
            break;
        case '\t':
            ++tabCnt;
            break;
        case '\n':
            ++newlineCnt;
            break;
        case ' ':
            ++bsCnt;
            break;
        }
    }
    cout << "Number of vowels: \t" << vowelCnt << endl;
    cout << "Number of bsCnt: \t" << bsCnt << endl;
    cout << "Number of tabCnt: \t" << tabCnt << endl;
    cout << "Number of newlineCnt: \t" << newlineCnt << endl;
    return 0;
}
