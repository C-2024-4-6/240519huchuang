#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}
int main()
{
	int m, n;
	cout << "请输入两个自然数：" << endl;
	cin >> m >> n;
	cout << "最大公约数为：" << gcd(m, n) << endl;
	cout << "最小公倍数为：" << lcm(m, n) << endl;
	return 0;
}