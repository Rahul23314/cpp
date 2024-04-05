#include<iostream>
using namespace std;  
class Power;
class Base
{
	private:
		int x;  
		friend void calc(Base&base,Power&power);
};
class Power
{
	private:
		int y; 
	 friend void calc(Base&base,Power&power);
}; 
void calc(Base&base,Power&power)
{ 
	cout<<"Enter the base "<<endl;
	cin>>base.x;
	cout<<"Enter the power "<<endl;
	cin>>power.y; 
	int ans=1;
	for(int i=1;i<=power.y;i++)
	{
		ans=base.x*ans;
	} 
	cout<<ans;
}
int main()
{ 
	Base base;
	Power power;
	calc(base,power);
return 0;
} 


