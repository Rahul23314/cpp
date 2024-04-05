#include<iostream> 
#include<fstream> 
// write a programme for the reading the data 
/* for this use the 1.ifstream class obj for reading purpose  
                    2.creating the object of ifstream constructor and pass the path of the file in the constructor 
                    3.use the fail() for checking the whether the file is connected or not 
					4.i)Reading by single single character and also print the whole file and ii)reading the whole string at a time */
					
                     
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
 cout<<"File is connected "<<endl;
 /*char ch;
 fin>>ch;    // istead of the cin use the fin for scannig purpose 
 cout<<ch;  // this is for the single character  
             // there is automatic file handler which is present at the index of the elements 
            // for printing the whole file use the EOF(it is micro which is end of the file character)
            // we have the eof() function for reading &printing the data from the file*/
char ch;
while(fin.eof()==0)
{
	fin>>ch;
	cout<<ch;
}

return 0;
}

