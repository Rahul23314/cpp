// passing by address of pointer and store in the pointer to object 
 #include<iostream>
using namespace std; 
class Number
{
	public:
		int x,y;
}; 
void print(Number *ptr);
int main()
{  
	Number T1;
	print(&T1);
	cout<<"T1.x "<<T1.x;


return 0;
} 
void print(Number *ptr)
{
		cout<<"Enter the x and y:-> "<<endl; 
		cin>>ptr->x>>ptr->y;
		cout<<ptr->x<<" "<<ptr->y<<" ";
}

