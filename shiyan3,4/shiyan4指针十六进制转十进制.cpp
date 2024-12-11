#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int parseHex(const char* const hexString)
{
	int len = strlen(hexString);//计算字符串长度
	int result = 0;
	for (int i = 0; i < len; i++)//循环，遍历每个字符
	{
		char c = hexString[i];
		int value;
		if (c >= '0' && c <= '9')
		{
			value = c - '0';
		}
		else if (c >= 'A' && c <= 'F') {
			value = c - 'A' + 10;
		}
		else if (c >= 'a' && c <= 'f')
		{
			value = c - 'a' + 10;
		}
		else {
			return -1;
		}//检查非法字符
		result += value * pow(16, len - i - 1);//转换
	}
	return result;
}
int main()
{
	char hexString[100];
	cout << "Enter a hexadecimal number: ";
	cin >> hexString;
	int decimal = parseHex(hexString);
	if (decimal != -1)
	{
		cout << "The decimal equivalent of " << hexString << " is " << decimal << endl;
	}
	else {
		cout << "Invalid input." << endl;
	}
	return 0;
}