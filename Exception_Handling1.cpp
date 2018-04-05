#include<iostream>
using namespace std;
int main()
{
	int num,den;
	cout<<" Enter the numerator & denominator:"<<endl;
	cin>>num;
	label:cin>>den;
	try	
	{
		if(den==0) throw 0;
		else
		{
			cout<<"numerator/denominator"<<num/den<<endl;
		}
	}
	catch(int x)
	{
		cout<<" Divisible by"<<x<<"is not possible \n";
		cout<<" Enter denominator other than zero \n";
		goto label;
	}
return 0;
}
