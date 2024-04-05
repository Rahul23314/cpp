#include<iostream>
using namespace std; 
class Number
{
   private:
	   	int x,y;
   public:
	   Number(int a )
	   {
	   	 cout<<"Enter the value of x "<<endl;
	   	 cin>>x;
	   	 cout<<"Enter the value of y "<<endl;
	   	 cin>>y;
	   }   
	   Number()
	   {
	   	
	   }
	   Number operator*(Number Temp)// here the left(T1) entity will goes as the calling object 
	   {
	   Number Ans;
	   Ans.x=x*Temp.x;
	   Ans.y=y*Temp.y;
	   return Ans;	
	   }	 
	   Number operator -(Number Temp) // here the calling object is result of (T1*T2) here also there is use of bodmoduos 
	   { 
	     Number Ans;
	     Ans.x=x-Temp.x;
	     Ans.y=y-Temp.y;
	     return Ans;
	   } 
	   void show()
	   {
	   	cout<<"the value of x is "<<x<<endl;
	   	cout<<"the value of y is "<<y<<endl;
	   }
};
int main()
{  
	
Number T1(1),T2(1),T3(1),T4;   // to avoiding the occurance of the default constructor to all type of object pass one paramerter for making the differentiate 
T4=T1*T2-T3;
T4.show();

return 0;
}

