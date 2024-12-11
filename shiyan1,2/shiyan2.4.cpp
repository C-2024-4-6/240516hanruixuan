#include<iostream>
using namespace std;
int main()
{
	double a{}, b{};
	char c{};
    cout<<"请输入计算式"<<endl;
	cin >> a >> c >> b;
	switch (c)
	{
	case'+':
		cout << a + b << endl;
		break;
	case'-':
		cout << a - b << endl;
		break;
	case'*':
		cout << a * b << endl;
		break;
	case'/':
		if (b == 0)
		{
			cout << "除数不能为0" << endl;	
		}
		else
        cout << a / b << endl;
		break;
	case'%':
		if (static_cast<int>(b) == 0) {
			cout << "错误：除数不能为0！" << endl;
		}
		else
			cout << static_cast<int>(a) % static_cast<int>(b) << endl;;
		break;
	default:
			cout << "运算符非法" << endl;
			break;

	}
	main();
		return 0;
}
