#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入两个正整数：" << endl;
	cin >> a >> b;
	int Y{};
	int B{};
	int i{};
	
	for (int i = a*b; i >= a && i >= b; i = i--)
	{
		if (i % a == 0 && i % b == 0)
		{
			B = i;
		}
	}
	for (int i = 1; i <= a && i <= b;i = i++ )
	{
		if (b % i == 0 && a % i == 0)
		{
			Y = i;
		}
	}
	cout << "它们的最大公约数为：" << Y << endl;
	cout << "它们的最小公倍数为：" << B << endl;
	main();
	return 0;
}