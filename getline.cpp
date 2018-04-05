#include<iostream>
#include<cstring>
using namespace std;
main()
{
	char buf[20];
	cout<<" Enter any string"<<endl;
	cin.getline(buf,20);
	cout.write(buf,strlen(buf));
}


