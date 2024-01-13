#include<iostream>
using namespace std;
class Friends // class
{
	public:  
		static int money;	//the static data member can be shared within the objects of a class
};
int Friends::money=100;
int main()
{
	//So we have a Friends class
	Friends joe;	//creating joe object of friends class	
	Friends peter;	//creating peter object of friends class
	cout<<"Money of joe: "<<joe.money<<endl;
	cout<<"Money of peter: "<<peter.money<<endl;
}
