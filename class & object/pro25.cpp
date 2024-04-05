#include<iostream>
using namespace std; 
class Number
{
	public:
	int x,y;
	void scan()
	{
		cout<<"Enter the x and y:-> "<<endl;
		cin>>x>>y;
	} 
	void show()
	{
		cout<<"The  value of x and y:-> ";
		cout<<x<<" "<<y<<endl;
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
	r->scan();   
    p->show(); 
     q->show();
      r->show();

return 0;
}
