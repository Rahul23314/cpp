 /* calling const member function:1.In this the only non-static member function become the const member function
                            2.only the calling object become the constant inside the const member function,all passing elements are work as normally
							3.for constant use of the const keyword at postfix in the fucn declaration at the defination of function inside the class
							4.calling object is become constant inside that const member function but it is normally in the other meber function*/
							 
 #include<iostream>
using namespace std; 
class Number
{
	public:
		int x; 
		void change() const
		{
		//	x=x+2;  // error because for const member function we cannot assign the value 
			cout<<x+2;
		}
};
int main()
{
 Number Temp; 
 cout<<"Enter the value of x "<<endl;
 cin>>Temp.x;
 Temp.change(); 
 
 cout<<endl<<Temp.x;

return 0;
}

