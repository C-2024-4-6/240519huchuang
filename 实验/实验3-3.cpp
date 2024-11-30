#include<iostream>
#include "mytemperature.h"
using namespace std;
int main()
{
	double t=40.0;
	while(t > 0)
	{
		cout << "Celsius" << endl;
		cin >> t;
		cout << "Fahrenheit" << endl << celsius_to_fah(t) << endl;
	}
	double T=120.0;
	while (T > 0)
	{
		cout << "Fahrenheit" << endl;
		cin >> T;
		cout << "Celsius" << endl << fahrenheit_to_cels(T) << endl;
	}
	return 0;
}