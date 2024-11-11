#include<iostream>
using namespace std;
int main() {
	double F;
	cin >> F;
	double C = (F - 32) * 5 / 9;
	printf("%.2f\n", C);
	return 0;
}

