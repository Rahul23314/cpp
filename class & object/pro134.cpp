#include<iostream>
using namespace std; 
class Base
{
	private:
		int x; 
		
	
};
class Power
{
	private:
		int y;
}; 
void calc()
{
	Base base;
	Power power;
	cin>>base.x;
	cin>>power.y; 
	int ans;
	for(int i=1;i<=power.p;i++) 
	{
		ans=ans*base;
	} 
	cout<<ans;
}
int main()
{  calc();
return 0;
}

