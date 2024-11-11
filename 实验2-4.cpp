#include<iostream>
using namespace std;
int main()
{
	double a, b;
	cout << "请输入第一个数：" << endl;
	cin >> a;
	char op;
	cout << "请输入运算符："<<endl;
	cin >> op;
	cout << "请输入第二个数：" << endl;
	cin >> b;
	switch (op) {
	case'+':
		cout << a + b << endl;
		break;
	case'-':
		cout << a - b << endl;
		break;
	case'*':
		cout << a * b << endl;
		break;
	case'/':
		if (b == 0) { cout << "除数不能为0！" << endl; }
		else { cout << a / b << endl; }
		break;
	case'%':
		if (static_cast<int>(b) == 0) { cout << "除数不能为0！" << endl; }
		else {
			int A = static_cast<int>(a);
			int B = static_cast<int>(b);
			cout << A % B << endl;
		}
		break;
	default:
		cout << "非法运算符！" << endl;
	}return 0;
}
