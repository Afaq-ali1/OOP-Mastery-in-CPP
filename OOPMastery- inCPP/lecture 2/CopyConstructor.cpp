#include<iostream>
using namespace std;
class Person // class
{
	// By default they're private 
		int value;
	public:
		Person(int v)	//default constructor 
		{	
			// Initializing values 
			value=v;
		}
		Person(const Person& other) // passing object of person class by reference
		{
			value=other.value;
		}
		
		void display() 
		{
			cout<<"value is: "<<value<<endl;
		}

};
int main()
{
	Person personObj(5); //	parametrized constructor of Person class  
	personObj.display(); //	 this will display values we given in the constructor
	
	Person personObj2(personObj); // copy constructor of Person class 
	cout<<"Copy constructor"<<endl;
	personObj.display(); //	this will display values zero initalized in default constructor
	
}
