#include<iostream>
#include<cstring>
using namespace std;
class Student
{
protected:
int roll;
char name[10];
public:
Student()
{
	cout<<" Student constructor "<<endl;
	cout<<" Enter the Roll and Name of Student :"<<endl;
	cin>>roll>>name;
}
Student(int r,const char *p)
{
	roll=r;
	strcpy(name,p);
}
void display()
{
	cout<<" Roll:"<<roll<<endl;
	cout<<" Name:"<<name<<endl;
}
~Student()
{
	cout<<" in student destructor :"<<endl;
}
};
class Exam:virtual protected Student
{
protected:
float m1,m2,m3,m4,m5,m6;
public:
Exam()
{
	cout<<" In exam default constructor: "<<endl;
	cout<<" Enter Marks:"<<endl;
	cin>>m1>>m2>>m3>>m4>>m5>>m6;
}
Exam(int r ,const char *p,float f1,float f2,float f3,float f4,float f5,float f6):Student(r,p)
{
	cout<<" In exam parameter constructor:"<<endl;
	m1=f1;
	m2=f2;
	m3=f3;
	m4=f4;
	m5=f5;
	m6=f6;
}
void display()
{
	cout<<" Roll:"<<roll<<endl;
	cout<<" Name:"<<name<<endl;
	cout<<" Marks below :"<<endl<<m1<<" "<<m2<<" "<<m3<<" "<<m4<<" "<<m5<<" "<<m6<<endl;
}
~Exam()
{
	cout<<" In exam destructor:"<<endl;
}
};
/*main()
{
	Exam Obj;
	Obj.display();
	Exam Obj1(12,"aaa",56,67,89,92,78,99);
	Obj1.display();
}
*/

