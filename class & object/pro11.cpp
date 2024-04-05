#include<iostream>
using namespace std; 
class Number
{
	public:
		int x;
		static void show()
		{
			//x=5;  // this will genrate the error because the static the function does not have any calling object directly
			int x=5;
			cout<<x;
		}
};
int main()
{ 
	Number t1,t2;
	Number::show();
	t1.show();


return 0;
}

