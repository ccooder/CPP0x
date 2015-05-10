#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ofstream outf("2",ofstream::out|ofstream::app);
	ostream &out = outf;
	out << "Test1";
	return 0;
}
