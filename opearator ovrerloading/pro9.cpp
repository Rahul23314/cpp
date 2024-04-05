#include<iostream>
using namespace std; 
class Number
{
	private:
		int x,y;
	public:
		Number()
		{
			
		} 
		Number (int a,int b)
		{
			x=a;
			y=b;
		} 
		Number operator +(int a)
		{
			Number ans;
			ans.x=x+a;
			ans.y=y+a;
			return ans;
		 }   
		 void show()
		 {
		 	cout<<"x= "<<x<<endl;
		 	cout<<"y= "<<y<<endl;
		 }
		 friend Number operator+(int a,Number Temp);
		
}; 
Number operator+(int a,Number Temp)
{
	Number Ans;
	Ans.x=Temp.x+a;
	Ans.y=Temp.y+a;
	return Ans;
}
int main()
{
	Number T1(2,5),T2(3,6);
	Number Ans;
	Number Res=T1+10;  // we cannot to do the addition of the object directly use of the operatort overloading of the binary elements, for this we can use the memeber function as well as independent function because the left side entity is the calling object of the own class or via independent function is also possible 
    Res.show();
    Res=10+T2;    // here there is no calling object,hence there must be independent function 
    Res.show();  
return 0;
}  


