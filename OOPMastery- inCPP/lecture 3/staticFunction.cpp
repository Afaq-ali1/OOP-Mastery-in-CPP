#include<iostream>
using namespace std;
class Numbers
{
	public:  
		static int staticValue;
		int nonStaticValue=5;
	static void staticFunction()	//in static function only static members can be accessed
	{
		cout<<"staticValue is: "<<staticValue<<endl;
//		cout<<"nonStaticValue is: "<<nonStaticValue;	this will geneterate error
	}
	void nonStaticFunction()
	{
		
		cout<<"staticValue is: "<<staticValue<<endl;
		cout<<"nonStaticValue is: "<<nonStaticValue;
	}
	
};
int Numbers::staticValue=100;
int main()
{
	Numbers obj;
	obj.staticFunction();
	obj.nonStaticFunction();
}
