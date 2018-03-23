#include<iostream>
using namespace std;
//Forward declaration
class B;
class A
{
	int NumA;
	public:
	A():NumA(12)
	{
	}
	//friend function declaration
	friend int add(A,B);
};
class B
{
	int NumB;
	public:
	B():NumB(12)
	{
	}
	//friend function declaration
	friend int add(A,B);
};
int add(A objA,B objB)
{
	return (objA.NumA+objB.NumB);
}
int main()
{
	A obj1;
	B obj2;
	cout<<" Sum: "<< add(obj1,obj2)<<endl;
	return 0;
}

