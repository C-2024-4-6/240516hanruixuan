#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point(int x = 60, int y = 80) {
		this->x = x, this->y = y;
	}
	void setPoint(int i,int j) {
		x = 60 + i, y = 80 + j;
	}
	void display() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point point;
	point.setPoint(1, 2);
	point.display();
	return 0;
}