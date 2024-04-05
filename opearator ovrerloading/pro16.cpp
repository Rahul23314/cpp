#include<iostream>
using namespace std; 
class Number
{
	public:
		int x,y;
		Number()
		{
			x=0;
			y=0;
		} 
		Number(int x,int y)
		{
			this->x=x;
			this->y=y;
		} 
		void show()
		{
			cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
		}  
	
}; 
Number operator+(Number temp1,Number temp2)   // For this left hand side is work as calling object 
		{
			Number ans;
			ans.x=temp1.x+temp2.x;
		    ans.y=temp1.y+temp2.y;
		    return ans;
		}
int main()
{
  Number temp1(40,21),temp2(50,87),temp3;
  temp3=temp1+temp2;   // opeartor overloading is nothing but the function call in which the user define datatype is used 
  temp3.show();

return 0;
}
 	
