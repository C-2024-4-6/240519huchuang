#include<iostream>
#include <cstring>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int L1 = strlen(s1);
	int L2 = strlen(s2);
	for (int i = 0; i <= L2 - L1; i++)
	{
		int j;
		for (j = 0; j < L1; j++)
		{
			if (s1[j] != s2[i + j])
			{
				break;
			}
		}
		if (j == L1)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	char s1[100];
	char s2[100];
	cout << "Enter the first string: ";
	cin.getline(s1, 100);
	cout << endl;
	cout << "Enter the second string: ";
	cin.getline(s2, 100);
	cout << "indexOf('" << s1 << "','" << s2 << "')is " << indexOf(s1, s2);
	return 0;
}