#include<iostream>
using namespace std;
int main()
{
	bool lockers[100] = { false };
	for (int S = 1; S < 100; ++S)
	{
		for (int L = S - 1; L < 100; L += S)
		{
			lockers[L] = !lockers[L];
		}
	}
	cout << "最终打开的柜子序号为：" << endl;
	for (int i = 1; i < 100; i++)
	{
		if (lockers[i])
		{
			cout << "L" << i+1 << " ";
		}
	}
	return 0;
}