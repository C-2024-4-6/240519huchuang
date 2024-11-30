#include <iostream>
using namespace std;
void swap(double& a, double& b)
{
    double temp = a;
    a = b;
    b = temp;
}
void bubbleSort(double arr[], int n) 
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
    double list[10] = { 12, 23, 42, 21, 23.5, 40, 43, 12.3, 55.6, 34.0 };
    cout << "排序前的数组：";
    int k;
    for(k=0;k<10;k++)
    {
        cout << list[k] << " ";
    }
    cout << endl;
    int listSize = sizeof(list) / sizeof(list[0]);
    bool changed = true;
    bubbleSort(list, listSize);
    cout << "排序后的数组：";
    for (int i = 0; i < listSize; i++) 
    {
        cout << list[i] << " ";
    }
    cout << endl;
    return 0;
}