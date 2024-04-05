/*Accessing datamebers using pointer : 
 1.There is use of the -> opertor in this left side of the -> consist the pointer_to_object & right side consist of the datamember this is similar case with the obj.datameber case also
 2.you can acess that datameber of the object only ,which address in store in that pointer. other datamembers of other object without object address is not possible
3.don't use the object while accessing the pointer to object.
*/

#include<iostream>
using namespace std; 
class Number
{
	public:
	int x,y;
};
int main()
{  
 Number T1,T2;
 T1.x=5;
 T1.y=16; 
 Number *p=&T1;  
 cout<<"Address of T1 by using pointer:-> "<<p<<endl;
 cout<<"p->x: "<<p->x<<endl;  
 cout<<"p->y: "<<p->y<<endl; 
 
 


return 0;
}

