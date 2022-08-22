#include<iostream>
using namespace std;
class sample
{
		int a;
		friend int myfriendfun(sample obj);
};
int myfriendfun(sample obj)
{
	obj.a = 100;
	return obj.a;
}
main()
{
	sample obj;
	cout<<"\n"<<myfriendfun(obj);
}