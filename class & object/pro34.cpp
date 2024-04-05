// creating runtime object and strore the addition of two object  in third one 
#include<iostream>
using namespace std; 
class Number
{
	public:
		int x,y;
};
int main()
{
 Number *p,*q,*r;  
 p=new Number();// this is allocation of the memory each pointer storing the address of the runtime object present on the heap section and containing the x and y 
 q=new Number();  
 r=new Number(); 
 cout<<"Enter the value of the first object "<<endl;
 cin>>p->x>>p->y;
 cout<<"Enter the value of the second object "<<endl;
 cin>>q->x>>q->y;
 r->x=p->x+q->x;
 r->y=p->y+q->y;
 cout<<"The summation of the two object is "<<endl;
 cout<<"r->x:"<<r->x<<" "<<" r->y: "<< r->y;
 

return 0;
}

