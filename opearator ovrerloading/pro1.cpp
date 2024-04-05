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
	   Number operator!() // here ! is uses for scanning the the value of x and y , here the opearand is unary due to this that passes direcrtly as a calling object 
	   {   
	      Number Temp;  
	      cout<<"Enter the x "<<endl;
	   	  cin>>Temp.x; 
	   	  cout<<"Enter the y "<<endl;
	   	  cin>>Temp.y; 
		  return Temp; 
	   	  
	   } 
	   void show()
      {
        cout<<"The value of x is "<<x<<endl;
		cout<<"The value of y is "<<y<<endl;	
	  }
};
int main()
{ 
 Number T1;
 Number T2;
 T2=!T1;   // calling the automatically and scanning the values 
 T2.show();

return 0;
}

