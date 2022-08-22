#include<iostream>
using namespace std;
class A
{
	int c;
	public:
		void display()
		{
			cout<<"\n inside class A.";
		}
		void display(float n)
		{
			cout<<"\n A="<<n;
		}
		void display(int a)
		{
			c=7;
			cout<<"\n Addition ="<<a;
		}
};
main()
{
	A obj;
	obj.display();
	obj.display(5);
	obj.display(9);
	
}