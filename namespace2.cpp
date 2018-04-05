#include<iostream>
using namespace std;
namespace abc
{
	int x=89;
	float y=78.5;
	void display()
	{
		cout<<" In abc display :"<<endl;
		cout<<"x: "<<x<<"\t y: "<<y<<endl;
	}
}
namespace xyz
{
	float x=12.3;
	char ch='A';
	void display()
	{
		cout<<" In xyz display :"<<endl;
		cout<<"x: "<<x<<"\t ch: "<<ch<<endl;
	}
}
using namespace abc;
int main()
{
	cout<<xyz::ch<<endl;
	xyz::display();
	cout<<y<<endl;
	display();
	return 0;
}
