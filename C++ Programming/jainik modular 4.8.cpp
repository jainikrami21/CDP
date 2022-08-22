//8.Define a class to represent lecture details. Include the following members and the 
//program should handle at lest details of 5 lecturer.
//Data members
//Name of the lecturer 
//Name of the subject 
//Name of course 
//Number oflecturers
//Data functions
//To assign initial values 
//To add a lecture details
//To display name and lecture details
#include<iostream>
#include<conio.h>
using namespace std;
class simple
{
	private:
		char name[100];
		char subject[100];
		char course[100];
		int lecturer;
	public:
		void getdetails()
		{
			cout<<"\n Enter the lecturer details......,";
			cout<<"\n Enter the lecturer name:-";
			cin >> name;
			cout<<"\n Enter the subject:-";
			cin >> subject;
			cout<<"\n Enter the course:-";
			cin >> course; 
			cout<<"\n Enter the number of lecturer:-";
			cin >> lecturer;
		}
		void putdetails()
		{
			cout<<"\n The represent lecture details:-";
			cout<<"\n Name of the lecturer is:-"<<name;
			cout<<"\n Name of the Subject is:-"<<subject;
			cout<<"\n Name of Course is:-"<<course;
			cout<<"\n Number of lecturers is:-"<<lecturer;
		} 
};
int main()
{
	simple ob;
	ob.getdetails();
	ob.putdetails();

}