#include<iostream>
using namespace std;
class Person // class
{
	// by default they're private 
		int a;
		int b;
	public:  // public Access specifier can be accessed in other classes and main function with the object of class 
		Person()	//default constructor 
		{	//Initializing a & b zero
			a=0;	
			b=0;
		}
		Person(int x,int y)	//default constructor 
		{	
			// Initializing values 
			a=x;	
			b=y;
		}
		void display() 
		{
			cout<<"value of a is: "<<a<<endl;
			cout<<"value of b is: "<<b<<endl;
		}

};
int main()
{
	Person personObj; // this is default constructor of Person class is created 
	personObj.display(); //	this will display values zero initalized in default constructor
	
	Person personObj2(5,6); //	this is parametrized constructor of Person class is created  
	personObj2.display(); //	 this will display values we given in the constructor
}
