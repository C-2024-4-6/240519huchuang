#include "mytemperature.h"
using namespace std;
double celsius_to_fah(double cel)//�����¶ȵ������¶�
{
	return cel * 9.0 / 5.0 + 32;
}
double fahrenheit_to_cels(double fah)//�����¶ȵ������¶�
{
	return (fah - 32) * 5.0 / 9.0;
}