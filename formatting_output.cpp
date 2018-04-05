#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	int x;
	cout<<" Enter any number: "<<endl;
	cin>>x;
	cout.width(6);
	cout.setf(ios::right,ios::adjustfield);
	cout.fill('*');
	cout<<x<<endl;
	cout<<oct<<x<<endl;
}

