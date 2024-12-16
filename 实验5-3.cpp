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
		cout << "长：";
		cin >> length;
		cout << "宽：";
		cin >> width;
		cout << "高：";
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
	cout << "请分别输入三个长方柱的长宽高:" << endl;
	cout << "第一个：" << endl;
	b1.setbox();
	cout << "第二个：" << endl;
	b2.setbox();
	cout << "第三个：" << endl;
	b3.setbox();
	cout << "V1=" << b1.getvolume() << endl;
	cout << "V2=" << b2.getvolume() << endl;
	cout << "V3=" << b3.getvolume() << endl;
	return 0;
}