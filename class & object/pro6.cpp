#include<iostream>
using namespace std; 
class Number
{
	 
	 public:int x;
	 void show()
	 {
	 	cout<<x;
	 }
};
int main()
{
Number t1,t2;
t1.x=54;
t1.show();
cout<<"\n";
t2.x=89;
t2.show();

return 0;
}


