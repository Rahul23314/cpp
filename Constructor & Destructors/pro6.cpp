 /*how you will access all  private construcor. 
 Two soln are there :
 1.By using the friend concept  
 2.By doing the public access specifier as static function 
 */
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
		 friend int main();
	
};
int main()
{
 Number Temp(15);    
  Number T1;
  T1.show();

return 0;
}

