//constructor overloading
#include<iostream>
using namespace std;

class Student
{
	public:
		Student()
		{
			cout<<"Hello\n";
		}
		Student(int marks,int age)
		{
			cout<<"\n Your Score is: "<<marks;
			cout<<"\n Your Age is: "<<age;
		}
		Student(char name[20],char sub[20])
		{
			cout<<"\n\n Your name is : "<<name;
			cout<<"\nYour subject is : "<<sub;
		}
		~Student()
		{
			cout<<"\n\n -------Thank You--------\n\n";
		}
		
};
main()
{
	Student s;
	Student obj(85,24);
	Student info("Jainik","developer");
}