#include<iostream>
#include <unordered_set>
using namespace std;
int main()
{
	int s[10];
	unordered_set<int>distinctNumbers;
	cout << "Enter ten numbers:";
	for (int i = 0; i < 10; i++)
	{
		cin >> s[i];
		distinctNumbers.insert(s[i]);
	}
		cout << "The distinct numbers are:";
		for (const auto& num : distinctNumbers) 
		{
			cout << num << " ";
		}
	return 0;
}
