#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
main()
{
	fstream file("data1",ios::in|ios::out);
	file<<"welcome "<<endl;
	file<<"hyderabad "<<endl;
	file.seekg(0);
	char ch[80];
	while(file)
	{
		file>>ch;
		cout<<ch<<endl;
		bzero(ch,80);
	}
	file.close();
}
