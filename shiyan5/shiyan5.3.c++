#include<iostream>
using namespace std;
class Cuboid {
private:
	int length;
	int width;
	int height;
	int volume;
public:
	Cuboid(){}
	Cuboid(int length, int width, int height,int volume) {
		this->length = length, this->width = width, this->height = height,this->volume=volume;
	}
	void Length() {
		cin >> length;
	}
	void Width() {
		cin >> width;
	}
	void Height() {
		cin >> height;
	}
	double area() {
		return length * width;
	}
	double Show() {
		volume = area() * height;
		cout << "The volume is:" << volume;
		return 0;
	}
};
int main() {
	cout << "Please input the length of the cuboid:" << endl;
	Cuboid MyCuboid;
	MyCuboid.Length();
	cout << "Please input the width of the cuboid:" << endl;
	MyCuboid.Width();
	cout << "Please input the height of the cuboid:" << endl;
	MyCuboid.Height();
	MyCuboid.Show();
	return 0;
}