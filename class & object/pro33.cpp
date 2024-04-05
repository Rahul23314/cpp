// formation of the runtime object:This is similar to formation of the runtime data by using the new operator 
#include<iostream>
using namespace std; 
class Number
{
	public:
		int x,y;
};
int main()
{   
Number *p;
p=new Number();     // this is allocation of the new Memory 
cout<<"Enter the x and y by using the object to pointer:"<<endl;  // in this pointer is storing the address of the runtime object
cin>>p->x>>p->y;
cout<<"p->x: "<<p->x<<" "<<"p->y: "<<p->y<<endl;

return 0;
}

