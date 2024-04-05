#include<iostream>
using namespace std; 
class Number
{
	public:
		int x,y; 
		void assign()
		{
			x=2;
			y=7;
		}
		void scan()const
		{
			//x=2;
			//y=7; 
			cout<<"x+2: "<<x+2<<endl;
			cout<<"y+3: "<<y+3<<endl;
		} 
		void show()
		{
			cout<<"X: "<<x<<" "<<"Y: "<<y<<endl;
		}
};
int main()
{
  Number num; 
  num.assign();
  num.scan();
  num.show();

return 0;
}

