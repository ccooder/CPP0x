#include <iostream>

using namespace std;

int main()
{

	
	cout << "Size of Bool:" <<sizeof(bool) << endl;
	cout << "Size of Char:" <<sizeof(char) << endl;
	cout << "Size of wchar_t:" <<sizeof(wchar_t) << endl;
	cout << "Size of char16_t:" <<sizeof(char16_t) << endl;
	cout << "Size of char32_t:" <<sizeof(char32_t) << endl;
	cout << "Size of Short:" <<sizeof(short) << endl;
	cout << "Size of Int:" <<sizeof(int) << endl;
	cout << "Size of Unsigned Int:" <<sizeof(unsigned) << endl;
	cout << "Size of Long:" <<sizeof(long) << endl;
	cout << "Size of Long Long:" <<sizeof(long long) << endl;
	cout << "Size of Float:" <<sizeof(float) << endl;
	
	cout << "Size of double:" <<sizeof(double) << endl;
	cout << "Size of Long Double:" <<sizeof(long double) << endl;
	int ic = 640;
	signed char c = ic;
	cout << "Assign to signed char " <<  ic  << ",The real value is:" << (int)c << endl;
	cout << "Size of Short:" <<sizeof(short) << endl;
	cout << "Size of Short:" <<sizeof(short) << endl;
	cout << "Size of Short:" <<sizeof(short) << endl;
	
	
	int i = 2147483647;
	cout << i << endl;
	long long l = 9223372036854775807LL;
	cout << l << endl;
	return 0;
}

