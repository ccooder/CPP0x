#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	char s[] = "Hello ";
	const char s1[] = "World!";
	auto len = strlen(s) + strlen(s1);
	const unsigned s3_len = len;	
	char s3[s3_len];

	cout << strcpy(s3, strcat(s, s1)) << endl;
	return 0;
}
