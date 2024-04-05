#include<iostream> 
#include<fstream>
using namespace std;
int main()
{
 ifstream fin;            // this is used for the reading purpose 
 ofstream fout;
 fin.open("D:\\practice c++\\File Handling\\myfile",ios::in); 
 if(fin.fail()==1)
 {
 	cout<<"File is not connected"<<endl;
 	exit(1);
 } 
 cout<<"File is connected"<<endl; 
 char arr[100];
 while(fin.eof()==0)
 {
 	fin.getline(arr,100);
   fout<<arr<<endl;
 }

return 0;
}

