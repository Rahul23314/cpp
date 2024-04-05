#include<iostream>
using namespace std; 
class Base
	{
		private:
			int b;
		public:
			int getbase()
			{  
			 
				cout<<"Enter the base "<<endl;
				cin>>b; 
				return b;
			}
	};
	class Power
	{
		private:
			int p;
		public:
			int getpower()
			{   
			  
				cout<<"Enter the power "<<endl;
				cin>>p; 
				return p; 
			}
	}; 
	void calc(int x,int y);
int main()
{
		Base base;
		Power power;
		int x=base.getbase();
		int y=power.getpower();  
		cout<<"Base:-> "<<x<<" "<<"Power:-> "<<y<<endl;
		calc(x,y);
	

return 0;
}
void calc(int x,int y)
{
	int i,ans=1;
	for(int i=1;i<=y;i++)
	{
		ans=ans*x;
	} 
	cout<<ans;
}

