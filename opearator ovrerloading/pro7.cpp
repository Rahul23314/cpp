#include<iostream>
using namespace std; 
class Number
{
	public:
		int x,y;
	Number(int a,int b)
	{
		x=a;
		y=b;
	} 
	Number()
	{ 
	  
	} 
	void show()
	{
		cout<<"x= "<<x<<endl;
		cout<<"y= "<<y<<endl;
	}
}; 
 Number operator~(Number Temp)
 {
 	Number Ans;
 	Ans.x=(Temp.x)*Temp.x;
 	Ans.y=Temp.y*Temp.y;
 	return Ans;
 }

int main()
{
Number T1(2,3);
Number T2;
T2=~T1;  // independent 
T1.show();  //2,3
T2.show(); // 4,9
return 0;
} 


