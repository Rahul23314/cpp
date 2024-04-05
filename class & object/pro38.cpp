#include<iostream>
using namespace std;
class Number
{
		public:
		int x,y;

};

void scan(Number *p)
{
	cout<<"Enter the data of first object"<<endl;
	cin>>p->x>>p->y;

} 
void print(Number *p)
{
	cout<<"The data of object"<<endl;
	cout<<"x: "<<p->x<<" "<<"y: "<<p->y<<endl;

} 
void add(Number *p,Number *q,Number *r)
{
	r->x=p->x+q->x;
	r->y=p->y+q->y; 
	
} 
int main()
{
Number *p,*q,*r;
p=new Number();
q=new Number(); 
r=new Number();
scan(p);
scan(q);
print(p);
print(q); 
add(p,q,r); 
print(r);

return 0;
} 

