#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "请输入一个字符" << endl;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		ch = ch - 'a' + 'A';
		cout << "转换后的大写输出为" << ch << endl;
	}
	else 
		cout << "其后继字符的ASCII码值为" << static_cast<int>(ch+1) << endl;
	return 0;
}