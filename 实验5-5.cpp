#include<iostream>
using namespace std;
class point
{
private:
	double x = 60;
    double y=80;
public:
	void setPoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	point p;
	p.setPoint(23, 19);
	p.display();
	return 0;
}