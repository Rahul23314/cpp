// sorting of the array of the object  according to age of the student  
#include<iostream>
using namespace std; 
class Student
{
     public:  
		string stdname;
		int age;
	
		void scan()
		{
			cout<<"Enter the name of the student "<<endl;
			getline(cin,stdname);
			cout<<"Enter the age of the student "<<endl;
			cin>>age;
			cin.ignore(1);
		} 
		void show()
     	{
		 cout<<"Name of the Student: "<<stdname<<" Age: "<<age<<endl;
		
     	}
};
int main()
{
Student stud[8]; 
for(int i=0;i<=7;i++)
{
	stud[i].scan();
} 
for(int i=0;i<=7;i++)
{
	for(int j=i+1;j<=7;j++)
	{
		if(stud[i].age>stud[j].age)
		{
			int temp;
			temp=stud[i].age;
			stud[i].age=stud[j].age;
			stud[j].age=temp;
		}
	}
} 
for(int i=0;i<=7;i++)
{
	stud[i].show();
}
return 0;
}
