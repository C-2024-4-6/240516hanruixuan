#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double price = 0.8; 
    int day = 1; 
    int totalApples = 2; // 第一天购买的苹果数
    double totalCost = 0; 

    while (totalApples <= 100)
    {
        totalCost += totalApples * price; // 累加花费
        day++; 
        totalApples *= 2; // 下一天购买的苹果数是前一天的2倍
    }

    double averageCost = totalCost / (day - 1); // 计算平均花费

    cout << "平均每天花费：" << averageCost << " 元" << endl;

    return 0;
}