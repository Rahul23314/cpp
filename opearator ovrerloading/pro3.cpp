#include<iostream>
using namespace std; 
class Number
{
	private:
		int x,y;
		public:
			Number ()
			{
				x=0;
				y=0;
			} 
			Number(int a, int b)
			{
				x=a;
				y=b;
			} 
			Number operator +(Number Temp)
			{
				Number Ans;
				Ans.x=x+Temp.x;
				Ans.y=y+Temp.y;
				return Ans;
			} 
			void show()
			{
				cout<<"the value of x is "<<x<<endl;
				cout<<"The value of y is "<<y<<endl;
			}
};
int main()
{ 
	Number T1(3,4),T2(5,7),T3(5,10);
	Number T4;
	T4=T1+T2+T3;    // having the t1+t2+T3 but yhere will bnot be any change is occur in the binary memebr function , first T1+T2 will go to result this result will add with the T3 ;
	T4.show();

return 0;
}

