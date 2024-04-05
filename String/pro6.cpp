// create a database of 6 student and check the whether the sachin is present or not  
 #include<iostream>
using namespace std; 
class Student
{
	public:
		string stdname ;
		int age; 
		void scan(int i)
		{
			cout<<"Enter the name of "<<i+1<<" student "<<endl;
			getline(cin,stdname);
			cout<<"Enter the age of "<<i+1<<" student "<<endl;
			cin>>age; 
			cin.ignore(1);
		} 
	
};
int main()
{   
 Student stud[6];
 int i,count=0,loc=0;
 for(int i=0;i<=5;i++)
 {
 	stud[i].scan(i);
 } 
 for(i=0;i<=5;i++)
 {
 	if(stud[i].stdname=="sachin")
 	{
 		count++; 
 		loc=loc+1;
 		break;
	 }
 } 
 if(count==1)
 {
 	cout<<"Sachin is found at the location "<<loc;
 } 
 else
 {
 	cout<<"No Match found ";
 }


return 0;
}

