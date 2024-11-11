#include<iostream>
using namespace std;
	int gcd(int a, int b)
	{
		while (b != 0) {
			int A = b;
			b = a % b;
			a = A;
		}return a;
	}
	int lcm(int a, int b)
	{
		return a * b / gcd(a, b);
	}
	int main() {
		int c,d ;
		cin >> c >> d;
		int g = gcd(c, d);
		int l = lcm(c, d);
		cout << "最大公因数：" << g << endl;
		cout << "最小公倍数：" << l << endl;
		return 0;

	}