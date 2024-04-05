#include<iostream>
using namespace std; 
class Number
{
	public:
		int x,y;
		Number(int a)
		{
			cout<<"In Parameterized constructor "<<endl;
		} 
		Number(int a,int b)
		{
			cout<<"In 2 int parameters constructor"<<endl;
		} 
		Number()
		{
			cout<<"In default constructor ";
		}
};
int main()
{ 
 Number T1(10);
 Number T2(2,6); 
 Number T3;


return 0;
}

