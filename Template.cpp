#include<iostream>
using namespace std;
/*template <class any>
any add(any x, any y)
{
	return x+y;
}
int main()
{
	cout<<add(10,20)<<endl;
	cout<<add(12.3,45.2)<<endl;
	cout<<add(89.1f,67.2f)<<endl;
}*/
template<class any1,class any2>
void display(any1 x,any2 y)
{
	cout<<x<<endl;
	cout<<y<<endl;
}
int main()
{
	display('A',23.4);
	cout<<endl;
	display('B',"victor");
	cout<<endl;
	display(45.6f,23);
	cout<<endl;
}
	

