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
	cout << "������Ԫ�ظ�����";
	cin >> n;
	cout << endl;
	cout << "����������Ԫ�أ�" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
    cout << "����������Ԫ�أ�" << endl;
    bubbleSort(a, i);
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    delete[] a;
	return 0;
}