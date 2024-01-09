#include<iostream>
using namespace std;
class Person // class
{
	public:  // public Access specifier can be accessed in other classes and main function with the object of class 
		int a=10;
		int b=5;
		void display() 
		{
			cout<<"value of a is: "<<a<<endl;
			cout<<"value of b is: "<<b;
		}
};
int main()
{
	Person personObj; // object of Person class is created 
	personObj.display(); //calling member function
	
}
