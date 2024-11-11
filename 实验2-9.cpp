#include<iostream>
using namespace std;
int main()
{
	double a = 0.8;
	double n = 2;
	double sumN =0;
	double sumM = 0;
	double day = 0;
	double aver = 0;
	for (a = 0.8; sumN < 100; n = n * 2, day++)
		sumN = sumN + n;
	sumM = sumN * a;
	aver = sumM / day;
	cout << aver << endl;
	return 0;
}
	