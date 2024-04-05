// constructor nothing but the nonstatic-member function of the class having the public access specfier and only work for the calling object.It is use when want to specfic code at the time of object creation.It is usally use for the Intiliazation of the datamemebers of the class and to avoid the storing the garbage value. It automatically get called when there is foramtion of the object.It is like function, but it does not have returntype not even void also .It has parameter list like function .For object creation the constructor is compulsory.If no any constructor is used by the user then by default there is default constructor is provided by the compiler.If you use the parameterized or any other constructor then default constructor will not be provided by the compiler we have to mention that default constructor according to condition.
   
#include<iostream>
using namespace std; 
class Number
{
	public:
		int x,y;
		Number()  // Don't forget () 
		{
			cout<<"In Number"<<endl;
		}
};
int main()
{ Number Num,Num1;


return 0;
}

