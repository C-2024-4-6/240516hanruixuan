#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int testUnint = 65534; // 0xffff
    cout << "output in unsigned int type:" << testUnint << endl;
    cout << "output in char type:" << static_cast<char>(testUnint) << endl;
    cout << "output in short type:" << static_cast<short>(testUnint) << endl;//testUnit的值65534超出了short的表示范围32767，65534的二进制表示是1111111111111110，当被解释为有符号short时，最高位的1被视为符号位，表示这是一个负数，所以结果是-2。
    cout << "output in int type:" << static_cast<int>(testUnint) << endl;
    cout << "output in double type:" << static_cast<double>(testUnint) << endl;
    cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
    cout << "output in Hex unsigned int type:" << hex << testUnint << endl; // 16进制输出
    cout << "output in Oct unsigned int type:" << oct << testUnint << endl; // 8进制输出
    double shishu = 3.14159;
    cout << "output real number in int type:" << static_cast<int>(shishu) << endl;
    system("pause");
    return 0;
}