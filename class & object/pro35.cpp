// create the independent dunctions for scanning and printing the data of the two runtime object
#include<iostream>
using namespace std; 
class Number
{
	public:
		int x,y;
}; 
void scan(Number *p,Number *q); 
void print(Number *p,Number *q);
int main()
{ 
Number *p,*q;
p=new Number();  // assign the memoery on the heap section and address is storing in the pointer present on the main() stackframe
q=new Number();
scan(p,q);
print(p,q);

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
	cout<<"p->x: "<<p->x<<"p->y: "<<p->y<<endl;
	cout<<"The data of second object"<<endl;
	cout<<"q->x: "<<q->x<<"q->y: "<<q->y;
	
}
