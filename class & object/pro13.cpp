#include<iostream>
using namespace std; 
class Base
{
	private:
		int x;   // make the calc here as friend function
		friend void calc();
	
};
class Power
{
	private:
		int y; 
	friend void calc();
}; 
void calc()
{
	Base base;
	Power power;
	cin>>base.x;
	cin>>power.y; 
	int ans=1;
	for(int i=1;i<=power.y;i++) 
	{
		ans=ans*base.x;
	} 
	cout<<ans;
}
int main()
{  calc();
return 0;
}

