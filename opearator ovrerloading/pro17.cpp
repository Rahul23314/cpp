#include<iostream>
using namespace std;  
// overloads the opearator and find the Maximum distance from the three distance  use of the ? :
class Number
{
  public:
  	int x,y; 
  	Number()
  	{
  		cout<<"Enter the value of x and y:"<<endl;
  		cin>>x>>y;
	}  
	Number(int a)
	{
		
	} 
	int operator>(Number Temp)
	{
		int total1=x+y;
		int total2=Temp.x+Temp.y;
		if(total1>total2)
		{
			return 1;
		} 
		else
		{
			return 0;
		}
	}
  	
}; 
ostream& operator<<(ostream& dout,Number res)
{
	dout<<res.x<<" "<<res.y;
	return dout;
}
int main()
{
 Number T1,T2,T3; 
 Number res(1);
 res=T1>T2?T1:T2;
 res=res>T3?res:T3;
 cout<<res;            // overloads the << symbol and also the > 

return 0;
}

