 #include<iostream>
using namespace std; 
class Number
{
	public:
		int x; 
		void change(Number &Temp) const
		{
		         //	x=x+2;  // error 
			Temp.x=x+2; 
			
		} 
		void show()
		{
			cout<<" x= "<<x;
		}
};
int main()
{
 Number T1,T2; 
 T1.x=10;
T1.change(T2); 
 T1.show(); 
 T2.show();

return 0;
}
