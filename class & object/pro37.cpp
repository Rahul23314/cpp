// declare the member functions for the scan ,print 
#include<iostream>
using namespace std;
class Number
{
	private:
		int x,y;
	public:
		void scan()
		{
			cout<<"Enter the x and y:"<<endl;
			cin>>x>>y;
		} 
		void print()
		{
			cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
		}
	
	
};
int main()
{
Number *p,*q;
p=new Number();
q=new Number();
p->scan();
q->scan();
p->print();
q->print();

return 0;
}

