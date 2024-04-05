#include<iostream>
using namespace std; 
class Number
{
	public:
		int x,y;
		void change() const
		{
			cout<<x<<" "<<y;
		} 
		void show()
		{
			cout<<x;
		}
};
int main()
{ 
	const Number T={10,20};
	cout<<"T.x: "<<T.x<<" "<<"T.y: "<<T.y<<endl;
//	T.show(); // this will generate an error because the show () is not const
  T.change();

return 0;
}

