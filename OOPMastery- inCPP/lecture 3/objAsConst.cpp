#include<iostream>
using namespace std;
class Numbers
{
	public:
		int value;
	  Numbers(int v)
	  {
		value=v;	
	  }
};
int main()
{
	const Numbers obj(3);
	//obj.value=4;	this will generate error 
	cout<<obj.value;
}
