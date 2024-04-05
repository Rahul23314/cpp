// calling member function using the pointer to object this is similar case with calling pointer object to datamember 
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
		cout<<"The  value of x and y:-> "<<endl;
		cout<<x<<" "<<y;
	}
	 
};
int main()
{
	Number T1; 
	Number *p;
	p=&T1;
	p->scan();   // jya object cha address pointer madhe store hoto tychasathi toch calling object rahto for that member function
    p->show();

return 0;
}

