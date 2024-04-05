#include<iostream>
using namespace std; 
class Number
{  
    int x,y;
	public: 
	Number()               // constructor cannot be private because we cannot create the their objects in non-member function
	{          
		x=10;y=54;
	} 
	void show()
	{
		cout<<"x= "<<x<<" "<<"y= "<<y;
	}
};

int main()
{
 Number num1; 
 num1.show();

return 0;
}

