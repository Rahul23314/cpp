// sorting of the array of the object  according to name of the Empolyee  
#include<iostream>
using namespace std; 
class Empolyee
{
     private:
		string empname;
		int age;
	public:
		void scan()
		{
			cout<<"Enter the name of the Empolyee "<<endl;
			getline(cin,empname);
			cout<<"Enter the age of the Empolyee "<<endl;
			cin>>age;
			cin.ignore(1);
		} 
		void show()
     	{
		 cout<<"Name of the Empolyee: "<<empname<<" Age: "<<age<<endl;
		
     	} 
     int compare(Empolyee Temp)
     	{
     	   if(empname>Temp.empname)
     	   {
     	   	  return 1;
			} 
			else
			{
				return 0;
			}
		 }
};
int main()
{ 
	int res,j;
Empolyee Emp[8]; 
for(int i=0;i<=7;i++)
{
	Emp[i].scan();
} 
for(int i=0;i<=7;i++)
{
	for(j=i+1;j<=7;j++)
	{
	
		res=Emp[i].compare(Emp[j]);
	}
  
if(res==1)
{
	      Empolyee temp;
			temp=Emp[i];
			Emp[i]=Emp[j];
			Emp[j]=temp;
} 
}
for(int i=0;i<=7;i++)
{
	Emp[i].show();
}
return 0;
}

