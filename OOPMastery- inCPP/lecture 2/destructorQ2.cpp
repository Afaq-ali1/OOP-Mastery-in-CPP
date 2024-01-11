#include<iostream>
using namespace std;
class Person
{
	public: 
		int value;  
		Person()		// default constructor
		{
			value=0;
		}
		~Person()		// destructor 	
		{
			cout<<"destructor is called"<<endl;
		}
};
void userDefinedFunction()
{
	cout<<"User defined function"<<endl;
	Person p; //so destructor will be called after this function when the scope of object is destroyed	
}
int main()
{
	userDefinedFunction();
	cout<<"main function"<<endl;	
}
