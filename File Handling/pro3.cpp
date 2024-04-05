#include<iostream> 
#include<fstream>
using namespace std; 
// write the code for the writing the data in the file  
/* In the write the code in the file  
   1.If the file path  is correct,file is present,data is present is the file then , after execution then the data will erased from the file 
   2.if the file path is correct, file is not present ,then there is formation of the file 
   3.if path is not correct then file will not connect */
int main()
{
	char path[]="D:\\practice c++\\File Handling\\myfile1.txt"; 
	ofstream fout(path);  
	if(fout.fail()==1)
	{
		cout<<"File is not connected"<<endl;
		exit(1);
	} 
	cout<<"File is connected"<<endl;  
	fout<<"Welcome to pict";
	

	
	

return 0;
}

