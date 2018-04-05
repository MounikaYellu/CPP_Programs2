#include<iostream>
using namespace std;
class Shape
{
protected:
float area,peri;
public:
Shape()
{
	area=0;
	peri=0;
}
virtual void Cal_area()=0;
virtual void Cal_peri()=0;
virtual void display()=0;
virtual ~Shape()
{
	cout<<" Shape destructor:"<<endl;
}
};
class Circle:public Shape
{
float radius;
public:
Circle()
{
	cout<<" Enter radius:"<<endl;
	cin>>radius;
}
void Cal_area()
{
	area=3.14*radius*radius;
}
void Cal_peri()
{
	peri=2*3.14*radius;
}
void display()
{
	cout<<" Details of circle:"<<endl;
	cout<<" Radius:"<<radius<<endl;
	cout<<" Perimeter:"<<peri<<endl;
	cout<<" Area:"<<area<<endl;
}
~Circle()
{
	cout<<" Circle destructor "<<endl;
}
};
class Rect:public Shape
{
float len,breadth;
public:
Rect()
{
	cout<<" In rectangle class "<<endl;	
	cout<<" Enter length and Breadth:"<<endl;
	cin>>len>>breadth;
}
void Cal_area()
{
	area=len*breadth;
}
void Cal_peri()
{
	peri=2*( len+breadth );
}
void display()
{
	cout<<" Details of Rectangle:"<<endl;
	cout<<" Length:"<<len<<endl;
	cout<<" Breadth:"<<breadth<<endl;
	cout<<" Perimeter:"<<peri<<endl;
	cout<<" Area:"<<area<<endl;
}
~Rect()
{
	cout<<" Rectangle destructor "<<endl;
}
};
class Square:public Shape
{
float side;
public:
Square()
{
	cout<<" Enter side of a square:"<<endl;
	cin>>side;
}
void Cal_area()
{
	area=side*side;
}
void Cal_peri()
{
	peri=4*side;
}
void display()
{
	cout<<" Details of Square:"<<endl;
	cout<<" Side:"<<side<<endl;
	cout<<" Perimeter:"<<peri<<endl;
	cout<<" Area:"<<area<<endl;
}
~Square()
{
	cout<<" Square destructor "<<endl;
}
};
int main()
{
	Shape *ptr;
	int choice;
	while(1)
	{
		cout<<" 1.Rectangle 2.Circle 3.Square 4.Exit:"<<endl;
		cout<<" Enter your choice : "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:ptr=new Rect;
				ptr->Cal_area();
				ptr->Cal_peri();
				ptr->display();
				delete ptr;
				ptr=NULL;
				break;
			case 2:ptr=new Circle;
				ptr->Cal_area();
				ptr->Cal_peri();
				ptr->display();
				delete ptr;
				ptr=NULL;
				break;
			case 3:ptr=new Square;
				ptr->Cal_area();
				ptr->Cal_peri();
				ptr->display();
				delete ptr;
				ptr=NULL;
				break;
			case 4:return 0;
			default:
				cout<<" Invalid choice ";
		}
	}
}
	 
