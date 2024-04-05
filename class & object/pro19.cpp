#include<iostream>
using namespace std; 
class Number;  
class Digit
{  
  public: 
  void scan(Number &var) ;   
void print(Number var);
	
};
class Number
{
	private:
		int x,y;
	friend void Digit::scan(Number &var);  // there is error because there is foramtion of the object ,which is does not know to the compiler 
	friend void Digit::print(Number var);
};

int main()
{
 Digit obj;
 Number var;
 obj.scan(var);
 obj.print(var);

return 0;
} 
	void Digit::scan(Number &var) 
	{
		cout<<"Enter the Number "<<endl;
		cin>>var.x>>var.y;   // here comes error because there is foramrtion and use of the object, which compiler does not have any preidea
		
	} 
 	void Digit:: print(Number var)
	{
		cout<<var.x<<" "<<var.y<<endl;;
	}

