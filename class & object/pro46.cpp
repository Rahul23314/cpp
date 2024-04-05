#include<iostream>
using namespace std; 
class Outer
{
	public:
		int x;
		class Inner
		{   
		  public:
			int y;
			void show();
		};
	   
}; 
void Outer::Inner::show()
{
	cin>>y; 
	Outer obj;
	cin>>obj.x;
}
int main()
{
  Outer::Inner Temp;
  Temp.show();

return 0;
}

