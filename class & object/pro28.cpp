#include<iostream>
using namespace std; 
class Number
{
	public:
		int x,y;
}; 
void print(Number ptr)   // while passing by value don't use the -> operator use directly obj(.)operator
{                        // note:while passing by value there is allocation of the memory for the data members  but in case of pass by address is not posible because while passing by address the pointer contain only the address of the object not the datamembers of the object in that passing by address there is no memoery allocation on the stackframe for the datamemebrs
	cout<<"ptr.x:-> "<<ptr.x<<" "<<"ptr.y:-> "<<ptr.y<<endl;
} 
void scan(Number *ptr)
{
	cout<<"Enter the x and y:-> "<<endl; 
	cin>>ptr->x>>ptr->y;
} 
void add(Number t1,Number t2,Number *t3)
{
	t3->x=t1.x+t2.x;
	t3->y=t1.y+t2.y; 
}
int main()
{
Number T1,T2,T3;
scan(&T1);
scan(&T2);
add(T1,T2,&T3); 
print(T3);

return 0;
}

