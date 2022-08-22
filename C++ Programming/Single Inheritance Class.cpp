#include<iostream>
using namespace std;
class A
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

main()
{
   A a;
   cout<<"\n\nClass A object";
   a.displayA();
   cout<<"\n";
   B b;
   cout<<"\n\nClass B object";
   b.displayB();
}