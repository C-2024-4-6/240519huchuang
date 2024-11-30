#include<iostream>
using namespace std;
void merge(int list1[],int size1,int list2[], int size2, int list3[])
{
	int i=0, j=0, k=0;
	while (i < size1 && j < size2)
	{
		if (list1[i] < list2[j]) 
		{
			list3[k] = list1[i];
			i++;
		}
		else
		{
			list3[k] = list2[j];
			j++;
		}
		k++;
	}
	while (i < size1)
	{
		list3[k] = list1[i];
		i++;
		k++;
	}
	while (j < size2)
	{
		list3[k] = list2[j];
		j++;
		k++;
	}
}
int main()
{
	const int maxsize = 80;
	int list1[maxsize];
	int list2[maxsize];
	int list3[maxsize * 2];
	cout << "Enter size1:";
	int size1;
	cin >> size1;
	cout << endl;
	cout << "Enter list1:";
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << endl;
	cout << "Enter size2:";
	int size2;
	cin >> size2;
	cout << endl;
	cout << "Enter list2:";
	for (int j = 0; j < size2; j++)
	{
		cin >> list2[j];
	}
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list is :";
		for (int k = 0; k < size1 + size2; k++)
		{
			cout << list3[k]<<" ";
		}

	return 0;
}