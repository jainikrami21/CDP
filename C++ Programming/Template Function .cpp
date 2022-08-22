#include<iostream>
using namespace std;
template <class T>
T findmax(T a,T b,T c)
{
	if(a>b)
	{
		if(a>c)
		{
			return a;
		}
		else
		{
			return c;
		}
	}
	else
	{
		if(b>c)
		{
			return b;
		}
		else 
		{
			return c;
		}
	}
}
main()
{
	int choice;
	cout<<"\n\n---------Menu---------\n\n";
	cout<<"\n Press 1 For Integer Value ";
	cout<<"\n\n Press 2 For Float Value ";
	cout<<"\n\n-------->Enter Your Choice : \n\n";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			int num1,num2,num3,result;
			cout<<"Enter Number 1 : ";
			cin>>num1;
			cout<<"Enter Number 2 : ";
			cin>>num2;
			cout<<"Enter Number 3 : ";
			cin>>num3;
			result = findmax(num1,num2,num3);
			cout<<"\n Result = "<<result;
			break;
			
		case 2:
			float f_num1,f_num2,f_num3,f_result;
			cout<<"Enter Number 1 : ";
			cin>>f_num1;
			cout<<"Enter Number 2 : ";
			cin>>f_num2;
			cout<<"Enter Number 3 : ";
			cin>>f_num3;
			f_result = findmax(f_num1,f_num2,f_num3);
			cout<<"\n Result = "<<f_result;
			break;
			
			default:
				cout<<"\n INVALID INPUT !";
	}
}