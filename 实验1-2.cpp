#include<iostream>
using namespace std;
int main() {
	double r;
	double h;
	cin >> r;
	cin >> h;
	const double PI = 3.1415926;
	double V =  PI * r * r * h/3;
	cout << V << endl;
	return 0;
}