#include<iostream>
using namespace std; 
class Number
{
   public:
   		int x,y;
		   Number(int x1,int y1)
		   {
	         x=x1;
			 y=y1;	   	
		   }	 
		   Number()
		   {
		   	x=0;
		   	y=0;
		   }
		   void show()
		   {
		   		cout<<"X: "<<x<<" "<<"Y: "<<y<<endl; 
		   } 
		   Number operator-()
		   {
		   	Number ans;
		   	ans.x=-x;
		   	ans.y=-y; 
		   	return ans;
		   }
};
int main()
{
   Number temp(58,98);
   Number temp2;
   temp2=-temp; 
   temp2.show();
return 0;
}

