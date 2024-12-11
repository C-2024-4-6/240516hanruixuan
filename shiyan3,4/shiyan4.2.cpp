#include<iostream>
#include<algorithm>
using namespace std;
int bubble(double list[],double listSize)
{
	bool changed = true;
	while (changed)
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
		}
	}
	return 0;
}
int main()
{
	double s[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> s[i];
	}
	bubble(s, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << s[i] << " " ;
	}
	cout << endl;
	return 0;
}
