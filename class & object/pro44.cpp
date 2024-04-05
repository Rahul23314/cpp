#include<iostream>
using namespace std; 
class Number
{
	public:
		int x,y;
		void change() const
		{
			cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
		}
};
int main()
{
 // use the  const keyword at the time of the declaration of the object , and also use the { }
 // Once Assigning after that you cannot change the value of the const object datamemebers 
 // const object can only the const. member function function becaue from the non-const memeber function it's value of the datamembers can be change
const Number obj={40,50};
cout<<obj.x<<" "<<obj.y<<endl;
obj.change();

return 0;
}

