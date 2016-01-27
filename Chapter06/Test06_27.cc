#include <iostream>
#include <initializer_list>

using namespace std;

void foo(initializer_list<int> init) {
    cout << "Number of parameter init :"
        << init.size() << endl;
}

int main()
{
    foo({1,2,3,4,5,6});
    return 0;
}
