//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include "student.h"  
using namespace std;//��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value(int n, const char* na, char s)
{
    num = n;
    strcpy_s(name,sizeof(name), na);
    sex = s;
}