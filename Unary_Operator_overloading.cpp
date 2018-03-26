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
void operator = (Arry obj)
{
	size=obj.size;
	ptr=new int[size];
	for(int i=0;i<size;i++)
		ptr[i]=obj.ptr[i];
}
friend void operator ++(Arry &);
friend Arry operator ++(Arry &,int);
~Arry()
{
	cout<<" In destructor :"<<endl;
	delete []ptr;
	ptr=NULL;
}
};
void operator ++(Arry &obj)
{
	for(int i=0;i<obj.size;i++)
		++obj.ptr[i];
}
Arry operator ++(Arry &obj,int)
{
	Arry temp;
	temp.size=obj.size;
	temp.ptr=new int[temp.size];
	for(int i=0;i<temp.size;i++)
		temp.ptr[i]=obj.ptr[i]++;
	return temp;
}
int main()
{
	int a[]={10,20,30,40,50};
	Arry obj(a,5);
	obj.display();
	++obj;
	obj.display();
	Arry obj2;
	obj2=obj++;
	//obj++;
	cout<<" Details of obj2:"<<endl;
	obj2.display();
	cout<<" Details of obj:"<<endl;
	obj.display();
	return 0;
}

