#include<iostream> 
#include<vector>
using namespace std; 
/*types of the iterators :
	1.iterator: in this for use of the opearator we have the begin() and end() function.
	2.const_iterator: in this type of the iterator we can only access the elements of the vectors but cannot change them
	3.reverse_iterator: in this type of iterator the elements are starts from the reverse order, for that we have rbegin(), rend() function 
	4.const_reverse_iterator: this is similar, to const_iterator in which we can access the value in the reverse order but the values are constant 
*/
int main()
{ 
	vector<int>obj(5); // this is formation of the constructors having the 5 elements haing the values of 5times 0
    for(int i=0;i<obj.size();i++)
	{
		cout<<"Enter the "<<i+1<<" element "<<endl;
		cin>>obj[i];
	} 
	// Now accessing the vector element by using the iterator 
	vector<int>::const_iterator itr;
	itr=obj.begin(); // this will returns the object of the class iterator  
	obj[2]=45;  
	while(itr!=obj.end())
	{
		cout<<*itr<<" ";
		itr++;
	}  
		//itr[2]=45;// this will genrate the error beacause here the iterator is const not the obj so obj can change the data 
	
	
return 0;
}

