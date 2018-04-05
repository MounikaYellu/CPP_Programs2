#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	try
	{
		ptr=new int[0xffffffff];
		*ptr=10;
		cout<<*ptr;
	}
	/*catch(bad_alloc &)
	{
		cout<<" New: failed to allocate memory:"<<endl;
	}*/
	catch(...)
	{
		cout<<"New"<<endl;
	}
}
