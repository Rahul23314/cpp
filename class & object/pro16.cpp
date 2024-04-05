#include<iostream>
using namespace std;  
class Number;    // forward declaration of Number
class Digit
{
	public: 
	void scan(Number &temp);
	void print(Number temp);
};
class Number
{    
	private:      // nothing is written is access modifier is private
	int x1,y1;  
	friend void Digit:: scan(Number &temp);  
	friend void Digit:: print(Number temp);
		 
	
}; 


int main()
{  
	Number T;
	Digit var;
	var.scan(T);
	var.print(T);
	return 0;


return 0;
} 
 	void Digit:: scan(Number &temp)
	 { 
	    cout<<"Enter the x and y "<<endl;
	 	cin>>temp.x1>>temp.y1;
	 } 
	 void Digit::print(Number temp)
	 {
	 	cout<<temp.x1<<" "<<temp.y1;
	 }

