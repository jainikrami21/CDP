#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{ 
		  cout<<"\n inside class A.";
	    }
};
class B: public A 
{
	public:
		void display()
		{
			cout<<"\n inside class B.";
		}
};
main()
{
//	A a;
	B b;
//	a.display();
	b.display();
	b.display();
}