#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream file1("data");
	ofstream file2("data2");
	char buf[80];
	while(file1)
	{
		file1.getline(buf,80);
		file2<<buf<<endl;
	}
	file1.close();
	file2.close();
}
