#include<iostream>
#include<fstream>
using namespace std;
main()
{
	float arr[5]={12.3,45.6,78.9,90.1,23.4};
	fstream file("dat",ios::in|ios::out);
	file.write((char *)&arr,sizeof(arr));
	file.seekg(0);
	float b[5];
	file.read((char *)&b,sizeof(b));
	for(int i=0;i<5;i++)
		cout<<b[i]<<" ";
	cout<<endl;
	file.close();
}
