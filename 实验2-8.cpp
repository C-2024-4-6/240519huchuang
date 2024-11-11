#include<iostream>
using namespace std;
int main() {
	double a;
	cin >> a ;
	double x=a;
	double y=a;
	while (y-x<1e-5||y-x<-1e-5) {
		y = (x + a / x) / 2;
		x = y;
		cout << y;
		break;
	}return 0;


}