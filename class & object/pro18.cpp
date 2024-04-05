#include<iostream>
using namespace std;  
class Number; 
class Digit
{
	public:
	void show();
};
 class Number
 {
 	private:
 		int x;
 		friend void Digit::show();
 		
 };

int main()
{
	Digit obj;
	obj.show();

return 0;
} 
	void Digit::show()
		{
			
			Number var;
			var.x=15;
			cout<<"var.x-> "<<var.x<<endl;
		}

