#include<iostream>
#include<vector>
using namespace std;      // accessing the vector by using the iterators  
                          // Iterator is nothing but the inner class of the every first class container(7 first class are present in the stl)
                          // due to inner class of the vector class we us the memebership identity label to access the inner class  
int main()
{ 
	vector<int>vtr(5); // giving size means allocating the memory by using the constructors  
	for(int i=0;i<=4;i++)
	{
		cout<<"Enter the "<<i+1<<" element"<<endl;
		cin>>vtr[i]; 
	}
	vector<int>::iterator itr;    // ' vector<int>::iterator': this is datatype or class of itr;
	itr=vtr.begin();               // "Due to this statement the vct.begin() returns the iterator class iterator object 
     while(itr!=vtr.end()) 
     {
     	cout<<*itr<<" ";       // as the itr is object but here it is work as the pointer we are performing the arithmetic operations on that 
     	itr++;
	 }

return 0;
}

