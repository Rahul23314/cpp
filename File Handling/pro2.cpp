#include<iostream> 
#include<fstream> 
// reading the multiple string at a time 
using namespace std;
int main()
{
	char path[]="D:\\practice c++\\File Handling\\myfile.txt"; 
	ifstream fin(path);
	if(fin.fail()==1)
	{
		cout<<"File is not connected"<<endl;
		exit(1);
	} 
	cout<<"File is connected"<<endl; 
	char str[30]; 
	while(fin.eof()==0)
	{
		 fin.getline(str,30);  // for this use the object of ifstream class for reding the string from the file 
	     cout<<str;
	}
	

return 0;
}

