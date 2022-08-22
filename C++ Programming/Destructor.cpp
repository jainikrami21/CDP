//constructor overloading
#include<iostream>
using namespace std;

class sample
{
	public:
		sample()
		{
			cout<<"Hello\n";
		}
		~sample()
		{
			cout<<"\n\n -------Thank You--------\n\n";
		}
};
main()
{
	sample obj;
}