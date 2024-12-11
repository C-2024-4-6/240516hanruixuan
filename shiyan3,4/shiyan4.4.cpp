#include<iostream>
#include<vector>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0; int j = 0; int k = 0;

	while (i < size1 && j < size2) {
		if (list1[i] < list2[j])
		{
			list3[k++] = list1[i++];
		}
		else {
			list3[k++] = list2[j++];
		}
	}
	while (i < size1)
	{
		list3[k++] = list1[i++];//将list1中的剩余元素放到list3
	}
	while (j < size2) {
		list3[k++] = list2[j++];//将list2中剩余的元素放到list3
	}
}
int main()
{
	int size1, size2;
	cout << "Enter list1:";
	cin >> size1;
	vector<int>list1(size1);
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i] ;
	}
	cout << endl;
	cout << "Enter list2:";
	cin >> size2;
	vector<int>list2(size2);
	for (int j = 0; j < size2; j++) 
	{
		cin >> list2[j];
	}
	vector<int>list3(size1+size2);
	merge(list1.data(), size1, list2.data(), size2, list3.data());
	cout << "The merged list is";
	for (int k = 0; k < size1 + size2; k++)
	{
		cout << list3[k] << " ";
	}
	return 0;
}