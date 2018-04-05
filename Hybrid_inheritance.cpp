#include"heirarchical_inheritance.cpp"
class Result:protected Exam ,protected Sport
{
float tot,per;
char grade[3];
public:
Result()
{
	cout<<" In Result default constructor: "<<endl;
}
void Cal_tot()
{
	tot=m1+m2+m3+m4+m5+m6;
	per=(tot/6)*100;
}
void Cal_grade()
{
	if(per<40) strcpy(grade,"C");
	else if(per>=40&&per<50) strcpy(grade,"B");
	else if(per>=50&&per<60) strcpy(grade,"A");
	else strcpy(grade,"A+");
}
void display()
{
	cout<<"Roll:"<<roll<<endl;
	cout<<"Name , Marks and grade "<<endl;
	cout<<name<<m1<<m2<<m3<<m4<<m5<<m6<<sgrade<<tot<<per<<grade<<endl;
}
~Result()
{
	cout<<" result destructor:"<<endl;
}
};
main()
{
	Result obj;
	obj.Cal_tot();
	obj.Cal_grade();
	obj.display();
}

