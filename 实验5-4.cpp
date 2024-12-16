#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
class students
{
private:
	int stu[2][5] =
	{ { 01,02,03,04,05 },
	{99,100,80,89,67} };
public:
	int max(int* p)
	{
		p = stu[1];
		int i = 0;
		int max = 0;
		for (i = 0; i < 4; i++)
		{
			p = &stu[1][i];
			if (stu[1][i] < stu[1][i + 1])
			{
				int a = stu[0][i];
				int b = stu[0][i + 1];
				swap(a, b);
				stu[0][i] = a;
				stu[0][i + 1] = b;
				max= i + 1;
			}
		}
		return stu[0][0];
	}
};
int main()
{
	students  student;
	int* t;
	int n = 1;
	t = &n;
	cout<<"成绩最高者学号为："<< student.max(t);
	return 0;
}