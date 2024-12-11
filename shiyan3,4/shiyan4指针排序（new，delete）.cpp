#include<iostream>
#include<cstring>
using namespace std;
void sortArray(int* arr, int size)
{
	for (int i = 0; i <size; i++)
	{
		for (int j = 0; j <size; j++)
		{
			if (arr[j] > arr[j + 1]&&j+1<size)
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;//比较大小，交换元素
			}
		}
	}
}
int main()
{
	int size;
	cout << "请输入数组元素个数:";
	cin >> size;
	int *dynamicArray = new int[size];//分配
	cout << "请输入" << size << "个整数：";
	for (int i = 0; i <size; i++)
	{
		cin >> dynamicArray[i];
	}
	sortArray(dynamicArray, size);
	cout << "排序后的数组：";
	for (int i = 0; i < size; i++)
	{
		cout<<dynamicArray[i]<<" ";
	}
	delete []dynamicArray;
	return 0;
}