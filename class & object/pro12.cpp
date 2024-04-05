/*friend function ceoncept:
1.In this function or class will get the friend of the any another class, function does;t have any friend function or class
2.friend fuction is not a member function of any class
3.by using the friend keyword the all datamebers of the class can acceesable in that friend function with the help of the obect or the membership identity label
4.types 1>doing the independent function as a friend function 
        2>doing the member function of any class to friend function of any class
        3>doing the whole class frirnd of the another class
*/
#include<iostream>
using namespace std; 
class Number
{    
	public:
		int x;
	private:
		int y;   // we cannot direct access the y because the y is private for that class so use the friend concept
	friend void show(Number num);
}; 
void show(Number num)
{   cout<<"Enter X "<<endl;
	cin>>num.x; 
	cout<<"Enter Y "<<endl;
	cin>>num.y;
	cout<<num.x<<endl; 
	cout<<num.y<<endl;
	
}
int main()
{  
Number num; 
show(num);
return 0;
}

