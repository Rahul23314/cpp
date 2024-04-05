#include<iostream>
using namespace std; 
class Number
{
	public:
		int x,y; 
		void scan()
		{ 
		cout<<"Enter the x and y:->"<<endl;
		cin>>x>>y;
		} 
		void print()
		{
			cout<<x<<" "<<y<<endl;
		} 
		void add(Number *p,Number *q)
		{
			x=p->x+q->y;  // this are the datamebers of the calling object. in this calling object address is store in the pointer to object
			y=p->y+q->y; 
			cout<<x<<" "<<y;
		}
}; 
int main()
{   
Number T1,T2,T3; 
Number *p,*q,*r;
p=&T1;
q=&T2;
r=&T3; 
p->scan();
q->scan(); 
p->print();
q->print(); 
r->add(&T1,&T2);


return 0;
}

