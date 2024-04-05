#include<iostream>
using namespace std; 
class Number
{
	private:
		int x,y; 
	friend void scan(Number &T1);
	friend void print(Number T1);	
}; 
void scan(Number &T1)
{
	cout<<"Enter the Number "<<endl;
	cin>>T1.x>>T1.y;
	
} 
void print(Number T1)
{
	cout<<T1.x<<" "<<T1.y<<" \n";
}
int main()
{ 
	Number T1,T2;
	scan(T1);
	scan(T2); 
	print(T1);
	print(T2);


return 0;
} 


