//main.cpp                      主函数模块
#include <iostream>             //将类声明头文件包含进来
#include "student.h"
using namespace std;
int main()
{
	Student stud;                //定义对象
	stud.set_value(007,"tc",'m');
	stud.display();              //执行stud对象的display函数
	return 0;
}