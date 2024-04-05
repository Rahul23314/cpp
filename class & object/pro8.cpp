#include<iostream>
using namespace std; 
class Number
{
	public:int x;
			static int y;
}; 
int Number::y;  //use the datatype only at declaration of static datamember outside the class
int main()
{ 
	Number num1; 
	cout<<"Enter the Number "<<endl;
	cin>>num1.x; 
	cout<<"num1.x= "<<num1.x<<endl;
	Number::y=5;
	cout<<"Number::y= "<<Number::y<<endl;
	num1.y=78;
	cout<<"The value of static y by using object "<<num1.y<<endl;   // we can access the static datamemebrs by using the object of the class but nonstatic datambers are not accesible by using the membership identity labelbecause they don't have the calling object 
	cout<<"The value of static y by using Memebership identity label "<<Number::y;
 	//cout<<"The value of static x by using Memebership identity label "<<Number::x;

return 0;
}

