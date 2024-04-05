#include<iostream> 
#include<vector>
using namespace std;
int main()
{ 
	vector<int>ptr(5);   // ptr is object of the vector class 
	for(int i=0;i<ptr.size();i++)
	{
		cout<<"Enter the "<<i+1<<"element "<<endl;
		cin>>ptr[i];
	}
	vector<int>::reverse_iterator rtr;   // this type of the ieterator print the vector elements in the reverse manner by using the rbegin() and rend() function 
    rtr=ptr.rbegin(); 
	while(rtr!=ptr.rend())	 // end() means element after the last element 
	{
		cout<<*rtr<<" "; 
		rtr++;              // we can use rtr-- as well 
	}


return 0;
}

