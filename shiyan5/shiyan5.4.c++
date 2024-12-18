#include<iostream>
using namespace std;
const int N = 5;
class Student {
private:
	long number;
	float score;
public:
		Student(long number, float score) : number(number), score(score) {
		}

void max(Student* p) {
	Student* max, * p1;
	max = p;
	for (p1 = p + 1; p1 < p + 5; p1++) {
		if (max->score < p1->score) {
			max->number = p1->number;
			max->score = p1->score;
		}
	}
	cout << max->number << '\t' << max->score;
}
};
int main()
{
	Student stu[5] = {Student(01,89),Student(02,97),Student(03,92),Student(04,83),Student(05,95)};
	stu[0].max(stu);
	return 0;
}