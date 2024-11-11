#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double C = a + b + c;
	if (a + b > c && a + c > b && b + c > a && a - b < c && a - c < b && b - c < a) {
		cout << "C=" << C << endl;

		if (a == b == c || a == b || a == c || b == c) {
			cout << "是等腰三角形" << endl;
		}
		else {
			cout << "不是等腰三角形" << endl;
		}
	}
	else {
		cout << "不是三角形" << endl;
	}return 0;
}