#include<iostream>
using namespace std; 
class Number
{
	 
	 public:int x,y;
	 void scan()
	 {    
	 	cout<<endl<<"Enter the x and y "<<endl;
	  cin>>x>>y;
	 }  
	 void print()
	 {
	 	cout<<"The x= "<<x<<endl; 
	 	cout<<"The y= "<<y;
	 }
	 
};
int main()
{

Number t1,t2;
t1.scan();
t1.print(); 
t2.scan();
t2.print();




return 0;
}


