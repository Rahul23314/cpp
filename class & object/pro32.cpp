/* this:1.This is inbulit function present in the cpp
		2.there is no need to declare the and intiliaze the this pointer 
		3.this pointer automatically will store the address of the calling object.As this is stroing address of the calling object then it is accessible only insode non-static menber function because tey have only calling object the static snd independent function doesnot have the this pointer concept is allowed.*/
		
     
#include<iostream>
using namespace std; 
class Number
{
	public:
		int x, y;
		void set(int x,int y)
		{
		this->x=x;		//x=x;   // this will print the garbagwe value only beacause the complier get confused between the local variable and datamember but the priority will be given to the local varoiable only
		this->y=y; 		//	y=y;    // soln is using of this pointer
		}   			// this will contain the address of the Temp and it is for Temp
		void show()
		{
			cout<<x<<" "<<y<<endl;
		}
};
int main()
{
Number Temp; 

Temp.set(2,3);
Temp.show();

return 0;
}

