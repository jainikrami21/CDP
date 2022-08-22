#include<iostream>
using namespace std;
class A:
{  
   public:
   	void displayA()
   	{   
     cout<<"\nInside Class A.";
    }
};

class B: public A
{
	public:
		void displayB()
		{
		  cout<<"\nInside Class B.";
	    }
};

class C: public B
{
	public:
		void displayC()
		{
			cout<<"\nInside Class C.";
	    }
};
main()
{
   A a;
   cout<<"\n\nClass A object";
   a.displayA();
   cout<<"\n";
   B b;
   cout<<"\n\nClass B object";
   b.displayB();
   b.displayA();
   cout<<"\n";
   C c;
   cout<<"\n\nClass C object";
   c.displayA();
   c.displayB();
   c.displayC();
}