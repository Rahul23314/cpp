#include<iostream>
using namespace std; 
class Number
{ 
	private: 
	Number(int a)
	{
		cout<<"In Parameterized constrcutor "<<endl;
	} 
	public:
		Number()
		{
			cout<<"In def constrcutor "<<endl;
		} 
		static void show()   // use of the these member function which does not any object means do the static to that perdicular function and make the object inside that, by this the constructor will automatically call
		{
			Number T(6);   
		} 
		
	
};
int main()
{
  Number::show();
return 0;
}

