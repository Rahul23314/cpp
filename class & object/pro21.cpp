// pointer to object 
#include<iostream>
using namespace std; 
class Number
{
	public:
		int x,y;
};
int main()
{  
 	Number T1,T2;   // the address of first datamember of the object and address of datamember is remains same, if the still the address is same but there is difference in their datatype
 	T1.x=5;
	Number *p; 
 	int *p1;
 	p1=&T1.x;  
 	p=&T1;
	cout<<"&T1 => "<<p<<endl;  
 	cout<<"&T1.x => "<<p1<<endl;  
 	cout<<"(p+1) => "<<(p+1)<<endl;   // this is the change in the datatype, due to change in datatype there is change in the  pointer arithmatic also
 	cout<<"(p1+1) => "<<(p1+1)<<endl;
 	
	

return 0;
}

