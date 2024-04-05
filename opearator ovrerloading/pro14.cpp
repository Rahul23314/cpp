#include<iostream>
using namespace std; 
class Base
{
	public:
		int b;
};
class Power 
{
	public:
		int p;
};  
istream& operator >>(istream& din,Base base)
{
	din>>base.b;
	return din;
}  
istream& operator >>(istream& din,Power power)
{
	din>>;
	return din;
}
ostream& operator<<(ostream& dout,Power) 

int main()
{
 Base base; 
 Power power;
 cout<<"Enter the base "<<endl;
 cin>>base;
 cout<<"Enter the power "<<endl; 
 cin>>power;
 int ans=1;
 for(i=1;i<=power;i++)
 {
 	ans=ans*base;
 } 
 cout<<ans;

return 0;
}

