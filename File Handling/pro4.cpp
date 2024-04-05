#include<iostream> 
#include<fstream>
using namespace std;   
class Student
{
	public:
		string name;
		int age;
	public:
		void getdata(int i)
		{
			cout<<"Enter the name of the "<<i<<" student "<<endl;
			cin>>name; 
			cout<<"Enter the age of the "<<i<<" student"<<endl;
			cin>>age;
		} 
		void showdata()
		{
			cout<<"Name: "<<name<<" "<<"Age: "<<age;
		}
};
int main()
{   
    Student std;
	fstream fobj; // by using this object we can read and write the data in the file
	fobj.open("D:\\practice c++\\File Handling\\myfile.txt",ios::in|ios::out|ios::app);
	if(fobj.fail()==1)
	{
		cout<<"File is not connected "<<endl;
		exit(1);
	} 
	cout<<"File is connected"<<endl;
	for(int i=1;i<=3;i++)
	{
		std.getdata(i);
		fobj<<std.name<<endl;
		fobj<<std.age<<endl;
	} 
	fobj.seekg(0,ios::beg);  // this is for the updated file handler
	for(int i=1;i<=3;i++)
	{
	    getline(fobj,std.name);
	    fobj>>std.age;
	    fobj.ignore(1);
	    std.showdata();
	}

return 0;
}

