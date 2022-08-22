#include<iostream>
using namespace std;

class Address
{
	public:
		string city;
		string state;
		int pincode;
		
		Address(string cityname, string statename, int pincode) //constructor
		{
			this->city = cityname;
			this->state = statename;
			this->pincode = pincode;
		}
};

class Employee
{
	int id;
	string name;
	Address* address;
	
	public:
		Employee(int id, string name, Address* address) //constructor
		{
			this->id = id;
			this->name = name;
			this->address = address;
		}
		
		void display()
		{
			cout<<"\n Id = "<<id;
			cout<<"\n Name = "<<name;
			cout<<"\n City = "<<address->city;
			cout<<"\n State = "<<address->state;
			cout<<"\n Pincode = "<<address->pincode;
		}
};


