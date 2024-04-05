#include<iostream> 
using namespace std;

class MyClass
{
public:
	int x;
	MyClass()
	{
		x = 10;
	}
	MyClass(int a)
	{
		x = a;
	}
};
int main()
{
	MyClass var2;

	cout <<var2.x ;
}
