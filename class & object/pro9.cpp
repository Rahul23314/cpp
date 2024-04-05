#include<iostream>
using namespace std; 
class Number
{
	public: 
		int x;
		static int y;
};
int Number::y=5;
int main()
{
 
Number num;
num.x=78; 
cout<<"num.x= "<<num.x<<" "<<Number::y<<endl;;  
num.y=66; 
cout<<Number::y; 

return 0;
}

