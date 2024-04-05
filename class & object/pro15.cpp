 
 // decalring the member functio of one class as a friend of another class
 #include<iostream>
using namespace std; 
class Power
{
	public:                       // there is no effect that where you are declaring the friend function 
		int y;
		void calc();
};  
class Base
{ 
	private:
		int x;
		
  friend void Power::calc();
};

int main()
{
  Power pow;
pow.calc(); 


return 0;
} 
void Power::calc()
{ 
	Base objbase;
	Power objpower; 
	int ans=1; 
	cout<<"Enter the base "<<endl; 
	cin>>objbase.x; 
	cout<<"Enter the power "<<endl;
	cin>>objpower.y;  
	for(int i=1;i<=objpower.y;i++)
	{
		ans=ans*objbase.x;
	} 
	cout <<ans;
	
	
}

