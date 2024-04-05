 #include<iostream>
using namespace std; 
class Number
{
	public:
		static int x;   // formation of the single copy
	private:
		static int y; 
		
}; 
int Number::x=5;
int Number::y=19;
int main()
{ 
	Number num;
	cout<<Number::x; 
//	cout<<Number::y;  // this will generate the error 
	


return 0;
}

