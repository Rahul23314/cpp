#include<iostream>
using namespace std;
class Number
{
        public:
        	int x,y;
        	Number()
        	{
        		cout<<"Enter the value of x and y"<<endl;
        		cin>>x>>y;
			} 
			Number(Number &Temp)
			{
				cout<<Temp.x<<" "<<Temp.y;
			}		
};
int main()
{
  Number T1;
  Number T2=T1;    // This is also called the copy constructor because it vall the constructor at the time of the object creation  
  Number T3(T1);
return 0;
}

