#include<iostream>
using namespace std;
class ABC
{
int x;
char name[20];
public : 
ABC()
{
	cout<< " Enter Roll number: ";
	cin>>x;
	cout<<endl<<" Enter name: ";
	cin>>name;
}
friend void display(ABC);
};
void display(ABC obj)
{
	cout<<obj.name<<endl;
	cout<<obj.x<<endl;
}
main()
{
	ABC obj;
	display(obj);
}
