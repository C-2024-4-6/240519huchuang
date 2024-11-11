#include<iostream>
using namespace std;
int main() {
	double x;
	cin >> x;
	if (x > 0 && x < 1) {
		double a = 3 - 2 * x;
		cout << "y=" << a << endl;
	}
	if (x >= 1 && x < 5) {
		double b =  x/2 + 1;
		cout << "y=" << b << endl;

	}
	if (x >= 5 && x < 10) {
		double c = x * x;
		cout << "y=" << c << endl;
	}
	return 0;
}