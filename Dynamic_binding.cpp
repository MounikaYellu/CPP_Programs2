#include<iostream>
using namespace std;
class Student
{
protected:
int roll;
char name[10];
public:
Student()
{
	cout<<" In student default constructor :"<<endl;
	cout<<" Enter Roll & Name:"<<endl;
	cin>>roll>>name;
}
virtual void display()
{
	cout<<"Roll:"<<roll<<endl;
	cout<<"Name:"<<name<<endl;
}
~Student()
{
	cout<<" In student destructor:"<<endl;
}
};
class Depart:public Student
{
float m1,m2,m3;
public:
Depart()
{
	cout<<" Enter Marks:"<<endl;
	cin>>m1>>m2>>m3;
}
void display()
{
	cout<<"Roll:"<<roll<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Marks are :"<<" " <<m1<<" "<<m2<<" "<<m3<<endl;
}
~Depart()
{
	cout<<"In Department:"<<endl;
}
};
int main()
{
Student *ptr;
ptr=new Depart;
ptr->display();
delete ptr;
ptr=NULL;
}
