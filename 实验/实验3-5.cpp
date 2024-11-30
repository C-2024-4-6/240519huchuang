#include<iostream>
using namespace std;
int main()
{
	int day = 1;
	int n = 1;
	while (day < 10)
	{
		n = (n + 1) * 2;
		day++;
	}
	cout << "第一天摘了："<<n<<"个桃子";
	return 0;
}