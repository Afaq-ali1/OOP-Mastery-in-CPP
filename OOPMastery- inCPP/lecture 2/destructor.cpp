#include<iostream>
using namespace std;
class Person // class
{
	public: 
		int value;  
		Person()		// default constructor
		{
			value=0;
		}
	// destructor 	
		~Person()
		{
			cout<<"destructor is called"<<endl;
		}
};
int main()
{
	Person personObj; // default constructor of Person class is created
	personObj.value=5; 
	cout<<"value is: "<<personObj.value<<endl;
	cout<<"main function"<<endl;	//so destructor will be called after main function when the scope of object is destroyed
}
