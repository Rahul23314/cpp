 // create three runtime objects and pass to scan ,print and add
#include<iostream>
using namespace std; 
class Number
{
	public:
		int x,y;
}; 
void scan(Number *p,Number *q); 
void print(Number *p,Number *q); 
void add(Number *p,Number *q,Number *r);
int main()
{ 
Number *p,*q,*r;  // this is formation of the three pointer to object
p=new Number();
q=new Number();
r=new Number();  // allocation of the memory on the heap section and returning the base address on the main()
scan(p,q);
print(p,q);
add(p,q,r);
return 0;
} 
void scan(Number *p,Number *q)  
{
	cout<<"Enter the data of first object"<<endl;
	cin>>p->x>>p->y;
	cout<<"Enter the data of second object"<<endl;
	cin>>q->x>>q->y;
	
} 
void print(Number *p,Number *q) 
{
	cout<<"The data of first object"<<endl;
	cout<<"p->x: "<<p->x<<" "<<"p->y: "<<p->y<<endl;
	cout<<"The data of second object"<<endl;
	cout<<"q->x: "<<q->x<<" "<<"q->y: "<<q->y<<endl;
	
} 
void add(Number *p,Number *q,Number *r)
{
	r->x=p->x+q->x;
	r->y=p->y+q->y;
	cout<<"The Addition is "<<r->x<<" "<<r->y;
}

