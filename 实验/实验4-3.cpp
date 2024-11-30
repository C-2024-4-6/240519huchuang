#include<iostream>
#include<cmath>
using namespace std;
bool isPerfectSquare(int num)
{
    int root = static_cast<int>(sqrt(num));
    return root * root == num;
}
int main()
{
    cout << "最终打开的储物柜为：" << endl;
    for (int i = 1; i < 100; i++)
    {
        if (isPerfectSquare(i))
        {
            cout << "S" << i << " ";
        }
    }
    return 0;
}