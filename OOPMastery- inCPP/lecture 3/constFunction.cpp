#include<iostream>
using namespace std;
class Numbers 
{
    public:
    int value;
    void changeValue(int n) const
    {
    	value = n;
	    cout << n;
    }
};

int main() 
{
    Numbers obj;
    obj.changeValue(10);
}
//This code will generate an error because the member function changeValue is declared as const,
//but it attempts to modify the non-const member variable value.
//In a const member function, you are not allowed to modify any non-const data members of the class.
