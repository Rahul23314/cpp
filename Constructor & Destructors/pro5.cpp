// Access specifier with the constructors 
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
		void show()
		{
			Number T(6);   // this is valid 
		}
	
};
int main()
{
 // Number Temp(15);    this will generate an error because the construcot is private, and we cannot it's object in non-memberfunction
  Number T1;
  T1.show();

return 0;
}

