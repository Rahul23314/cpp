// scan two objects and add their datamebers 
#include<iostream>
using namespace std; 
class Number
{
	public:
		int x,y; 
		
};
int main()
{
  Number T1,T2,T3; 
  Number *p,*q,*r;
 p=&T1; 
 q=&T2;
 r=&T3; 
 cout<<"Enter the x and y of T1-> "<<endl;
 cin>>p->x>>p->y;  
 cout<<"Enter the x and y of T2-> "<<endl; 
 cin>>q->x>>q->y;   
 r->x=p->x+q->y;
 r->y=p->y+q->y;
 cout<<"The value of x and y of T3 is "<< r->x<<" "<< r->y;

return 0;
}

