#include <iostream>
#include<cctype>
using namespace std;
int main() {
    char c;
    int letterCount = 0;
    int spaceCount = 0;
    int digitCount = 0;
    int otherCount = 0;
    cout << "请输入一行字符：";
    while ((c =cin.get()) != '\n')
    {
        if (isalpha(c) != 0)
        {
            letterCount++;
        }
        else if (isspace(c) != 0)
        {
            spaceCount++;
        }
        else if (isdigit(c) != 0)
        {
            digitCount++;
        }
        else
        {
            otherCount++;
        }
    }
    cout << "字母的个数：" << letterCount << endl;
    cout << "空格的个数：" << spaceCount << endl;
    cout << "数字的个数：" << digitCount << endl;
    cout << "其他字符的个数：" << otherCount << endl;
    return 0;
}