#include<iostream>
using namespace std;

class student
{
	public: 
		void scandata()
		{
			cout<<"Hello scandata"<<endl;
		} 
		void printdata();  // there will be declaration only 
		
}; 
void student::printdata()
{
	
			cout<<"Hello printdata";
		
}
int main()
{
	student t1;
	t1.scandata();
	t1.printdata();
return 0;
}


