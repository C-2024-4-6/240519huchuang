#include<iostream>
using namespace std;
void swap(int& a, int& b)
{
    double temp = a;
    a = b;
    b = temp;
}
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
	int i = 0;
    int n = 0;
	int *a = new int[100];
	cout << "请输入元素个数：";
	cin >> n;
	cout << endl;
	cout << "请输入数组元素：" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
    cout << "排序后的数组元素：" << endl;
    bubbleSort(a, i);
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    delete[] a;
	return 0;
}