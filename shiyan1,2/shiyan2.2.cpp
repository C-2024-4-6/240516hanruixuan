#include<iostream>
using namespace std;
int main()
{
	double x{};
	double y{};
	cout << "请输入x的值" << endl;
	cin >> x;
	if (x < 5 && x>0)
			if (x < 1)
				y = 3 - 2 * x;
			else
				y = 2 / (4 * x) + 1;
		else
			y = x * x;
		cout << y;
	return 0;
}