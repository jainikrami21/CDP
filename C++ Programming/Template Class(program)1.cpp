#include<iostream>
using namespace std;
template <class T>
class example
{
	
	T a,b;
	public:
		void input()
		{
			cout<<"\n Enter Value: ";
			cin>>a>>b;
		}
		void display()
		{
			cout<<"\n a="<<a<<"\n b="<<b;
		}
};
main()
{
	example<int> obj;
	cout<<"\n\n----------For Interger----------\n\n";
	obj.input();
	obj.display();
	
	example<float> obj2;
	cout<<"\n\n---------For Float----------\n\n";
	obj2.input();
	obj2.display();
	
}