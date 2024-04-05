#include<iostream>
using namespace std;
class Number 
{
	int x,y;
	public:
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
	 friend Number operator++(Number Temp1);
	
}; 
Number operator++(Number Temp1)
{
	 	Number Ans;
	 	Ans.x=Temp1.x+1;
	 	Ans.y=Temp1.y+1;
	 	return Ans;
	 
}
int main()
{
	Number T1(2,5);
	Number T2;
	T2=++T1;  // overloads this unary operator 
	T2.show(); //3,6
	T1.show(); //3,6

return 0;
} 


