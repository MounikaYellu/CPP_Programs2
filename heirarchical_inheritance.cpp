#include"Single_inheritance.cpp"
class Sport:virtual protected Student
{
protected:
char sgrade;
public:
Sport()
{
	cout<<" In default constructor of sport:"<<endl;
	cout<<" Enter sgrade:"<<endl;
	cin>>sgrade;
}
void display()
{
	Student::display();
	cout<<"sgrade:"<<sgrade<<endl;
}
~Sport()
{
	cout<<" Sport destructor:"<<endl;
}
};
/*int main()
{
	Exam obj;
	cout<<" Details of obj"<<endl;
	obj.display();
	Sport obj1;
	cout<<" Details of obj1:"<<endl;
	obj1.display();
	return 0;
}*/


