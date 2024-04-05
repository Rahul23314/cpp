#include<iostream> 
#include<string.h>
using namespace std; 
class Mystring 
{
	public:
		char arr1[30];
}; 
istream& operator>>(istream& din,Mystring &Temp)
{
	cout<<"Enter the string "<<endl;
	cin.getline(Temp.arr1,30);
	return din; 
}  
int operator==(Mystring str1,Mystring str2) 
{   
   if(strcmp(str1.arr1,str2.arr1)==0)
   {
   	return 1;
   } 
   else
   { 
     return 0;
   	
   }
	
}
int main()
{ 
Mystring str1,str2; 
Mystring str3;
cin>>str1;
cin>>str2; 
cout<<"Enter the string for the comaparison " <<endl;
cin>>str3;
if(str1==str3 || str2==str3)
{
	cout<<"Enter Name is matched "<<endl;

}
else
{
	cout<<"Enterd name is not found ";
}


return 0;
}


