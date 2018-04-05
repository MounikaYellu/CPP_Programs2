#include<iostream>
using namespace std;
template <class any>
class Array
{
any *ptr;
int size;
public:
Array()
{
	cout<<" Enter the number of elements:"<<endl;
	cin>>size;
	ptr=new any[size];
	cout<<" Enter your elements:\n";
	for(int i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
}
void print()
{
	cout<<" Elements are: "<<endl;
	for(int i=0;i<size;i++)
		cout<<ptr[i]<<" ";
	cout<<endl;
}
void sort()
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(ptr[j]>ptr[j+1])
				swap(j,j+1);
		}
	}
}
void swap(int i,int j)
{
	any temp;
	temp=ptr[i];
	ptr[i]=ptr[j];
	ptr[j]=temp;
}
void reverse()
{
	int i,j;
	for(i=0,j=size-1;i<j;i++,j--)
		swap(i,j);
}
~Array()
{
	cout<<" Destructor:"<<endl;
	delete []ptr;
	ptr=NULL;
}
int menu()
{
	int choice;
	while(1)
	{
		cout<<" 1.Print 2.Sort 3.Reverse 4.Exit \n";
		cout<<" Enter your choice :"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:print();break;
			case 2:sort();break;
			case 3:reverse();break;
			case 4:return 0;
			default:cout<<" Invalid choice:" ;
		}
	}
}
};
int main()
{
	cout<<" Char obj:"<<endl;
	Array <char > obj;
	obj.menu();
	cout<<"Float obj:"<<endl;
	Array <float > obj1;
	obj1.menu();
	return 0;
}
	




