#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class Student
{
int roll;
char name[15];
float per;
public:
Student()
{
	roll=0;
	strcpy(name," ");
	per=0;
}
Student(int r,const char *p,float f)
{
	roll=r;
	strcpy(name,p);
	per=f;
}
~Student()
{
	cout<<"Student destroyed:"<<endl;
}
friend void operator << (ostream &,Student &);
};
void operator <<(ostream &out,Student &obj)
{
	out<<"roll:"<<obj.roll<<endl;
	out<<"name:"<<obj.name<<endl;
	out<<"per:"<<obj.per<<endl;
}
main()
{
	Student obj1(10,"abc",67.7f);
	cout<<" Details of obj1:"<<endl;
	cout<<obj1;
	cout<<endl;
	fstream file("Data",ios::in|ios::out);
	file.write((char *) &obj1,sizeof(obj1));
	file.seekg(0);
	Student obj2;
	file.read((char *)&obj2,sizeof(obj2));
	cout<<obj2;
	cout<<endl;
}
	














