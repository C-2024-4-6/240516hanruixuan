#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<bool> lockers(100, true); 
    cout << "开着的存物柜编号为：";
    for (int i = 2; i <=100; i++) {
        for (int j = i; j < 100; j = ++j + i) {
            lockers[j] = !lockers[j];       //改变状态
        }
    }
    for (int i = 1; i <= 100; ++i) {
        if (lockers[i]) {
            cout << i << " ";
        }
    }
    return 0;
}
