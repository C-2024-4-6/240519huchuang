#include<iostream>
using namespace std;
class box
{
private:
	double length;
	double width;
	double height;
public:
	void setbox()
	{
		cout << "����";
		cin >> length;
		cout << "��";
		cin >> width;
		cout << "�ߣ�";
		cin >> height;
	}
	double getvolume()
	{
		return length * width * height;
	}
};
int main()
{
	box b1, b2, b3;
	cout << "��ֱ����������������ĳ����:" << endl;
	cout << "��һ����" << endl;
	b1.setbox();
	cout << "�ڶ�����" << endl;
	b2.setbox();
	cout << "��������" << endl;
	b3.setbox();
	cout << "V1=" << b1.getvolume() << endl;
	cout << "V2=" << b2.getvolume() << endl;
	cout << "V3=" << b3.getvolume() << endl;
	return 0;
}