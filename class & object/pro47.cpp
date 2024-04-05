#include<iostream>
using namespace std; 
int add(int x,int y)
 {   
    cout<<"x+y:-> "<<x+y<<endl;
 	cout<<"In Add() Function"<<endl;
 }
int main()
{
   int x1,x2;
   cin>>x1>>x2;
   int (*padd)(int x1,int y1);
   padd=&add;
   padd(3,5);

return 0;
}
 
 
