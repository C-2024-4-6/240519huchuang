//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student              //������
{
private:
	int num;
	char name[20];
	char sex;
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int n, const char* na, char s);
};