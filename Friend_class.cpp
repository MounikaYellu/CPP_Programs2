#include<iostream>
using namespace std;
class Rectangle
{
int l,b;
public:
Rectangle()
{
	l=10;
	b=20;
}
friend class Square;
};
class Square
{
int s;
public:
Square()
{
	s=5;
}
void display(Rectangle Rect)
{
	cout<<"\n Length : "<<Rect.l;
	cout<<"\n Breadth : "<<Rect.b;
	cout<<"\n Side: "<<s<<endl;
}
};
int main()
{
	Rectangle R;
	Square S;
	S.display(R);
}
