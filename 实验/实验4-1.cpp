#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int n=0;
    cout << "请输入10个整数：" << endl;
    for (int i = 0; i < 10; ++i)
    {
        int num;
        cin >> num;
        bool isUnique = true;
        for (int j = 0; j <n; ++j)
        {
            if (a[j] == num) 
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique) 
        {
            a[n] = num;
            n++;
        }
    }
    cout << "不同的数为：";
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}