#include<iostream>
using namespace std; 
namespace abc
{
	int x=90;
	float y=78.9;
	void display()
	{
		cout<<" In abc display:"<<endl;
	}
}
using namespace abc;
/*main()
{
	cout<<abc::x<<endl;
	abc::display();
}*/
main()
{
	int x=677;
	cout<<" Values from abc \n";	
	cout<<x<<"\t"<<y<<endl;
	display();
	cout<<" Main x value :";
	cout<<::x<<endl;
}

