#include <iostream>
using namespace std;
class MyClass 
{
    private:
        int value = 5;
  	  friend void acessPrivateData(MyClass);	//prototype with friend keyword in class body
};
	
	void acessPrivateData (MyClass obj)			 //friend function is declared globally
	{
    	cout << "Private Data: " << obj.value << endl;
	}

int main() 
{
    MyClass obj;
    acessPrivateData (obj);
}

