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
		Number(Number &Temp) 	 // for copy constructor must be catch by reference other wise cpp give an error 
		{
			x=Temp.x+10;
			y=Temp.y+10;
		}
};
int main()
{ 
	Number T1(2,5);
	Number T2(T1); 				// passing the object of the same class at to the class constructor at the time of object creation that construcotr is known as the copy construtors 
	cout<<"x= "<<T2.x<<" "<<"y= "<<T2.y; 
								// Number T2(&T1)  - This is paramterized constructor passing  
//	Number T2=T1; 				 // Another way of copy constructor,Beacuse we are copying at time of object creation itself
/*	Number T2;                  this is not way of copy constructor,Beacuse we are not copying at time of object creation itself.
	T2=T1;*/  


return 0;
}

