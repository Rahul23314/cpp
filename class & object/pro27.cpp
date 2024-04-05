#include<iostream>
using namespace std; 
class Number
{
	public:
		int x,y;
}; 
void print(Number *ptr)
{
	cout<<"ptr->x:- "<<ptr->x<<" "<<"ptr->y:- "<<ptr->y<<endl;
} 
void scan(Number *ptr)
{
	cout<<"Enter the x and y:-> "<<endl; 
	cin>>ptr->x>>ptr->y;
}
int main()
{
 Number T1; 
  scan(&T1);
 print(&T1);


return 0;
} 


