#include<iostream>
using namespace std;
class Time
{
	int h,m,s;
	public:
	Time()
	{
		cout<<" Enter Hour,Minute and Seconds \n";
		cin>>h>>m>>s;
	}
	~Time()
	{
		cout<<" Time destroyed :"<<endl;
	}
	friend void operator <<(ostream&,Time&);
};
void operator <<(ostream &out,Time &ob)
{
	out<<ob.h<<":"<<ob.m<<":"<<ob.s<<endl;
}
main()
{
	Time obj;
	cout<<obj;//operator<<(cout,obj);
}
