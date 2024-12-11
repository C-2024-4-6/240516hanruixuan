#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, x, x0;
    cout << "请输入一个正数 a：";
    cin >> a;
    
    if (a >= 0)
    {
        x0 = a;
        x = (x0 + a / x0) / 2;

        while (abs(x - x0) > 1e-10)
        {
            x0 = x;
            x = (x0 + a / x0) / 2;
        }
        cout << "a 的平方根是：" << x << endl;
        }
    else
        cout << "负数平方根不可求" << endl;

    main();
    return 0;
}