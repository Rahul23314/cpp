// comparsion pf the name of the student present in the list of the students
#include<bits/stdc++.h> 
#include<string.h>
using namespace std;  

class Student
{
	private:
		char name[30];
		int age;
		
		friend istream & operator>>(istream&din,Student stud); 
		friend  int operator==(Student stud,char *arr);
}; 
 
istream & operator>>(istream&din,Student stud)
{
	cout<<"Enter the Name of student "<<endl;;
	din.getline(stud.name,30); 
	cout<<"Enter the age of student "<<endl;
	din>>stud.age;
	din.ignore(1);
	return din;
 } 
 int operator==(Student stud,char *arr)
 {
 	if(strcmp(arr,stud.name)==0)
    
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
   Student stud[3];
   int i; 
   char arr[40]; 

   for(i=0;i<=2;i++)
   {
   	cout<<"Enter the "<<i+1<<"student information "<<endl; 
   	cin>>stud[i];
   }  
   	cout<<"Enter the name of the student that you want to find ?"<<endl;;
    cin.getline(arr,40);
   for(i=0;i<=2;i++)
   {
   	if(stud[i]==arr)
   	{
   		cout<<arr<<" is present in the given list of the student ";
   		break;
	   } 
	   
   } 
   if(i==3)
   {
   	cout<<"Your Enterd Name the student is not present in the list ";
   }
	

return 0;
}

