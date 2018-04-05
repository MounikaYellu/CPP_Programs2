#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
main()
{
	ofstream out("data");
	out<<"This is an example program"<<endl;
	out.close();
	char ch[80];
	ifstream in;
	in.open("data");
	while(in)
	{
		in>>ch;
		cout<<ch<<endl;
		bzero(ch,80);
	}
	in.close();
}

