#include<iostream>
using namespace std;
int main()
{
	int phy,chem,bio,maths,comp;
	int total;
	float percent;
	cout<<"Enter marks of computer";
	cin>>phy;
	cout<<"enter marks of English";
	cin>>chem;
	cout<<"enter marks of bio";
	cin>>bio;
	cout<<"enter marks of maths";
	cin>>maths;
	cout<<"enter marks of physics";
	cin>>comp;
	total= phy+chem+bio+maths+comp;
	percent=total/5.0;
	if(percent>=90)
	{
		cout<<"Grade=A";
	}
	else if(percent>=80)
	{
		cout<<"Grade=B";
	}
	else if(percent>=70)
	{
		cout<<"Grade=C";
	}
	else if(percent>=60)
	{
		cout<<"Grade=D";
	}
	else if(percent>=40)
	{
		cout<<"Grade=E";
	}
	else
	{
		cout<<"Gread F";
	}
}