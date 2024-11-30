#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    if (num == 2)
    {
        return true;
    }
    if (num % 2 == 0) 
    {
        return false;
    }
    int sqrt_num = static_cast<int>(sqrt(static_cast<double>(num)));
    for (int i = 3; i <= sqrt_num; i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "请输入一个整数：" << endl;
    cin >> n;
    if (is_prime(n))
    {
        cout << "是素数" << endl;
    }
    else
    {
        cout << "不是素数" << endl;
    }
    int t = 0;
    int m = 2;
    cout << "前两百个素数为：" << endl;
    while (t<200)
    {
        if (is_prime(m)) 
        {
            cout << m << " ";
            t++;
            if (t % 10 == 0)
            {
                cout << endl;
            }
        }
        m++;
    }
    return 0;
}