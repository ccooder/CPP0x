#include <iostream>
#include <string>
using namespace std;
using arrT = string[10];
string s1[10];
//typedef string arrT[10];

string (&func(int i))[10]{
}

arrT &func1(int i) {
}

auto func2(int i) -> string(&)[10]{
}

decltype(s1) &func3(int i){
    return i;
}

int main()
{
    //I prefer to the trail return.
    //Because it looks like clear.
    return 0;
}
