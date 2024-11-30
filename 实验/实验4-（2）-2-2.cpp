#include<iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int n = 0;
	int length = strlen(hexString);
	int value=0;
	for (int i = 0; i < length; ++i)
	{
		char digital = hexString[length - 1 - i];
		if (digital >= '0' && digital <= '9')
		{
			value = digital - '0';
		}
		else if (digital >= 'A' && digital <= 'F')
		{
			value = digital - 'A' + 10;
		}
		else if (digital >= 'a' && digital <= 'f')
		{
			value = digital - 'a' + 10;
		}
		n += value * static_cast<int>(pow(16, i));
	}
	return n;
}
int main()
{
	const char* hexString = "A5";
	cout << "转化为10进制数为：" << parseHex(hexString) << endl;
	return 0;
}