//stydent.h
#include<iostream>
using namespace std;
class Student              //类声明
{
private:
	int num;
	string name;
	char sex;
public:    
	void display();//公用成员函数原型声明
	void set_value();
	void set_value(int num, const string name, char sex);
};
//student.cpp
#include <iostream>
#include"student.h"  
void Student::display()         //在类外定义display类函数
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:"<< sex << endl;
}
void Student::set_value() {
    cout << "请依次输入编号、姓名、性别";
    cin >> num >> name >> sex;
}
void Student::set_value(int a,const string b,char c) {
    num = a;
    name=b;
    sex = c;
}
//main.cpp
#include <iostream>             //将类声明头文件包含进来
#include "student.h"
int main()
{
	Student stud; //定义对象
	Student stud1;
	stud.set_value(007, "tcg ", 'm');
	stud.display();// 执行stud对象的display函数
	stud1.set_value();
	stud1.display();
	return 0;
}