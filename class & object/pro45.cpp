#include<iostream>
using namespace std; 
class Outer
{
	public:
		int x;
		class Inner
		{
			public:
				int y;
		};
		Inner var;   // This is object of the Inner class 
};
int main()
{
   Outer obj;
   obj.x=10; 
   obj.var.y=20;
   cout<<obj.x<<" "<<obj.var.y; 
   // For creating the object of the Inner class use the Outer:: label compulsory 
   Outer::Inner temp; 
   temp.y=50;
   cout<<"\n";
   cout<<temp.y;

return 0;
}

