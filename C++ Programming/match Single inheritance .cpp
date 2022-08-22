#include<iostream>
using namespace std;
class cricketer
{
	public :
	int match,avg,crickterID,i;
	int runs[];
	void input()
	{
		cout<<"\nenter crickter ID::";
		cin>>crickterID;
		cout<<"\nEnter the number of matches played::";
		cin>>match;
		
		for(i=0;i<match;i++)
		{
			cout<<"\nenter the runs he made during match::";
			cin>>runs[i];
		}
	}
};
class batsman : public cricketer
{
	public:
		int sum = 0;
		void average_runs()
		{
			for(i=0;i<match;i++)
			{
				sum = sum + runs[i];
			}
			avg = sum/match;
		}
		void display()
		{
			cout<<"\ncrickter ID ::"<<crickterID;
			cout<<"\navg run rate::"<<avg;
			cout<<"\nnumber of matches played::"<<match;
		}
};
main()
{
	batsman b;
	b.input();
	b.average_runs();
	b.display();
	
	
	
}
