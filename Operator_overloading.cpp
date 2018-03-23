#include<iostream>
using namespace std;
class Complex
{
int real , img;
public:
Complex()
{
	real=0;
	img=0;
}
Complex(int a,int b)
{
	real=a;
	img=b;
}
void display()
{
	cout<<real;
	if(img>=0)
		cout<<"+";
	cout<<img<<"i"<<endl;
}
Complex operator +(Complex e)
{
	Complex temp;
	temp.real=real+e.real;
	temp.img=img+e.img;
	return temp;
}
Complex operator +(int x)
{
	Complex temp;
	temp.real=real+x;
	temp.img=img;
	return temp;
}
void operator ++()
{
	++real;
	++img;
}
Complex operator --(int)
{
	Complex temp;
	temp.real=real--;
	temp.img=img--;
	return temp;
}
};
int main()
{
	int a,b;
	cout<< " Enter the real & img for first number :"<<endl;
	cin>>a>>b;
	Complex e1(a,b);
	cout<<" First Complex number is :";
	e1.display();
	cout<< " Enter the real & img for second number :"<<endl;
	cin>>a>>b;
	Complex e2(a,b);
	cout<<" Second Complex number is :";
	e2.display();
	Complex e3;
	e3=e1+e2;
	cout<<" Addition of Complex numbers e3 : ";
	e3.display();
	Complex e4;
	e4=e3+5;
	cout<<" Adding an integer (5) to complex number e3 -->> e4 :";
	e4.display();
	++e1;
	cout<<" Preincrementing First number:";
	e1.display();
	Complex e5;
	e5=e1--;
	cout<<"Post incrementing First number:";
	e1.display();
	cout<<"Assigning post inc result to another number :";
	e5.display();
	return 0;
}


