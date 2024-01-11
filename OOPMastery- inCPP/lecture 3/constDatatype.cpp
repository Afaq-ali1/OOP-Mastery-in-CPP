#include<iostream>
using namespace std;
class Friends // class
{
	public:  
	// constructor must be public ,with no return type & same name as class 
		const int money=10;	//the static data member can be shared within the objects of a class
};
int main()
{
	//So we have a Friends class
	Friends joe;	//creating joe object of friends class
	//joe.money=20;	const data member cannot be changed or initilized again
	cout<<"Money of joe: "<<joe.money<<endl;
}
