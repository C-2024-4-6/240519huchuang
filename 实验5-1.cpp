#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:             
	int hour;
	int minute;
	int sec;
public:
	void setTime()
	{
		cin >> hour >> minute >> sec;
	}
	void showTime()
	{
		cout << hour << ":" << minute << ":" << sec <<endl;
	}
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.setTime();
	t1.showTime();
	return 0;
}