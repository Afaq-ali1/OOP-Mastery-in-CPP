#include<iostream>
using namespace std;
class Person // class
{
	public:  // public Access specifier can be accessed in other classes and main function with the object of class 
		int a=10;
		int b=5;
		void display() 
		{
			cout<<"Simple function"<<endl;
			cout<<"value of a is: "<<a<<endl;
		}
				void display(int x,int y) 
		{
			cout<<"\nParameterized function"<<endl;
			cout<<"value of a is: "<<a<<endl;
			cout<<"value of b is: "<<b;
		}

};
int main()
{
	int a1,a2;
	Person personObj; // object of Person class is created 
	personObj.display(); //calling member function
	personObj.display(a1,a2); //calling parametrized member function  
}
