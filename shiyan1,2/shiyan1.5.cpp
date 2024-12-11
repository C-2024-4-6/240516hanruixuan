#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double h;
    cout << "请输入华氏温度：";
    cin >> h;

    double s = (h - 32) * 5 / 9;

    cout << fixed << setprecision(2); // 设置输出精度为两位小数
    cout << "摄氏温度为：" << s << endl;

    return 0;
}