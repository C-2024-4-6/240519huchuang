#include<iostream>
using namespace std;
int main()
{
	double a, b;
	cout << "�������һ������" << endl;
	cin >> a;
	char op;
	cout << "�������������"<<endl;
	cin >> op;
	cout << "������ڶ�������" << endl;
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
		if (b == 0) { cout << "��������Ϊ0��" << endl; }
		else { cout << a / b << endl; }
		break;
	case'%':
		if (static_cast<int>(b) == 0) { cout << "��������Ϊ0��" << endl; }
		else {
			int A = static_cast<int>(a);
			int B = static_cast<int>(b);
			cout << A % B << endl;
		}
		break;
	default:
		cout << "�Ƿ��������" << endl;
	}return 0;
}
