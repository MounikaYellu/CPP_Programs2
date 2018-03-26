#include<iostream>
using namespace std;
class Arry
{
int *ptr;
int size;
public:
Arry()
{
	ptr=NULL;
	size=0;
}
Arry(int *a,int s)
{
	size=s;
	ptr=new int[size];
	for(int i=0;i<size;i++)
		ptr[i]= a[i];
}
void display()
{
	for(int i=0;i<size;i++)
		cout<<ptr[i]<<" ";
	cout<<endl;
}
Arry operator +(int x)
{
	Arry temp;
	temp.size=size;
	temp.ptr=new int[temp.size];
	for(int i=0;i<temp.size;i++)
		temp.ptr[i]=ptr[i]+x;
	return temp;
}
void operator = (Arry obj)
{
	size=obj.size;
	ptr=new int[size];
	for(int i=0;i<size;i++)
		ptr[i]=obj.ptr[i];
}
friend Arry operator +(int,Arry);
//friend Arry operator +(Arry,int);
~Arry()
{
	cout<<" In destructor :"<<endl;
	delete []ptr;
	ptr=NULL;
}
};
Arry operator +(int x,Arry obj)
{
	Arry temp;
	temp.size=obj.size;
	temp.ptr=new int[temp.size];
	for(int i=0;i<temp.size;i++)
		temp.ptr[i]=obj.ptr[i]+x;
	return temp;
}
/*Arry operator +(Arry obj,int x)
{
	Arry temp;
	temp.size=obj.size;
	temp.ptr=new int[temp.size];
	for(int i=0;i<temp.size;i++)
		temp.ptr[i]=obj.ptr[i]+x;
	return temp;
}*/
int main()
{
	int a[]={10,20,30,40,50};
	Arry obj(a,5);
	obj.display();
	Arry obj2;
	obj2=obj+5;
	obj2.display();
	Arry obj3;
	obj3=obj;
	obj3.display();
	Arry obj4;
	obj4=5+obj3; // can be fulfilled only with friend function 
	obj4.display();
	return 0;
}

