#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double C = a + b + c;
	if (a + b > c && a + c > b && b + c > a && a - b < c && a - c < b && b - c < a) {
		cout << "C=" << C << endl;

		if (a == b == c || a == b || a == c || b == c) {
			cout << "�ǵ���������" << endl;
		}
		else {
			cout << "���ǵ���������" << endl;
		}
	}
	else {
		cout << "����������" << endl;
	}return 0;
}