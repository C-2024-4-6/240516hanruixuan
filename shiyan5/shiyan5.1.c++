#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private :             // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void Hour(int h) {
		hour = h;
	}
	void Minute(int m) {
		minute=m;
	}
	void Sec(int s) {
		sec=s;
	}
	void ShowTime() {
		cout << hour << ":" << minute << ":" << sec;
	}
};
int main()
{
	Time t; //定义t1为Time类对象
	int h;
	int m;
	int s;
	cout << "请输入小时：";
	cin >> h;
	cout << "请输入分钟：";
	cin >> m;
	cout << "请输入秒：";
	cin >> s;
	t.Hour(h);    //输入设定的时间 
	t.Minute(m);
	t.Sec(s);
	t.ShowTime();
	return 0;
}