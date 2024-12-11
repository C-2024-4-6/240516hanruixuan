#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "请输入三角形的三边长" << endl;
	cin >> a >> b >> c;
	if (a + b > c && c + b > a && c + a > b && a - b < c && b - a < c && a - c < b && c - a < b && b - c < a && c - b < a)
	{
		float m{};
		m = a + b + c;
		cout << "这个三角形的周长是" << m << endl;
		if (a == b || b == c || a == c)
			cout << "这个三角形是等腰三角形" << endl;
		else
			cout << "这个三角形不是等腰三角形" << endl;
	}
	else
		cout << "输入的三个值不能组成一个三角形" << endl;
	return 0;
}
