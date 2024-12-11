#include<iostream>
using namespace std;
const double p = 3.1415926;
int main()
{
	double r, h;
	cout << "请输入圆锥的底面半径" << endl;
	cin >> r;
	cout << "请输入圆锥的高" << endl;
	cin >> h;
	double V = (1.0 / 3) *p* r * r * h;
	cout <<"圆锥的体积为"<< V;
	return 0;
}