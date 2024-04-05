#include<iostream> 
#include<vector>
using namespace std; 
int main()
{
	vector<int>vtr(5);
	for(int i=0;i<vtr.size();i++)
	{ 
	    cout<<"Enter the "<<i+1<<" element"<<endl;
		cin>>vtr[i];
	} 
	vector<int>::const_reverse_iterator rrtr;    // iterator is used as the pointer 
	rrtr=vtr.rbegin();
	while(rrtr!=vtr.rend())
	{
		cout<<*rrtr<<" "; 
		rrtr++;
	} 
	// rrtr[2]=65; this will generate error because we cannot change the value 
    return 0;
}

