#include<iostream>
using namespace std;
void test(int x)
{
	if(x==0) throw 'A';
	else if(x==1) throw 12;
	else if(x==2) throw 12.6f;
	else if(x==3) throw 45.6;
	else if(x==4) throw "Exception";
}
main()
{
	int x;
	cout<<" Enter x ranging from 0-4:"<<endl;
	cin>>x;
	try
	{
		test(x);
	}
	catch(char ch)
	{
		cout<<"char:"<<ch<<endl;
	}
	catch(int ch)
	{
		cout<<"int:"<<ch<<endl;
	}
	catch(float ch)
	{
		cout<<"float:"<<ch<<endl;
	}
	catch(double ch)
	{
		cout<<"double:"<<ch<<endl;
	}
	catch(char *ch)
	{
		cout<<"String:"<<ch<<endl;
	}
	/*catch(...)
	{
		cout<<" exception caught:"<<endl;
	}*/
}
	
