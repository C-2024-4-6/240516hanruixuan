#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << "最大公约数为：" << gcd(m, n) << endl;
    cout << "最小公倍数为：" << lcm(m, n) << endl;
    return 0;
}