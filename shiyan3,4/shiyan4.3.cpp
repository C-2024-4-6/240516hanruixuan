#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<bool> lockers(100, false); // 初始化所有存物柜为关闭状态

    // 模拟每个学生的操作
    for (int i = 1; i <= 100; ++i) {
        for (int j = i - 1; j < 100; j += i) {
            lockers[j] = !lockers[j]; // 改变存物柜状态
        }
    }

    // 输出状态为开的存物柜编号
    cout << "开着的存物柜编号为：";
    for (int i = 0; i < 100; ++i) {
        if (lockers[i]) {
            cout << i + 1 << " "; // 编号从1开始，所以需要加1
        }
    }
    cout << endl;

    return 0;
}