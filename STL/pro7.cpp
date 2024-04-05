#include<iostream> 
#include<vector>
using namespace std; 
/* some more functions about vector which are mainlt accening by using the iterator  
   1.insert(position,value): new element will be inserted by without removing any element from the vector elemets 
   2.erase(position)
   3.erase(start,end)  end will erase the elements from start elemet index upto end-1 */
int main()
{ 
	vector<int>vct(5); 
		for(int i=0;i<vct.size();i++)
	{ 
	    cout<<"Enter the "<<i+1<<" element"<<endl;
		cin>>vct[i];
	}     
	vector<int>::iterator itr; 
	itr=vct.begin();
     vct.begin();  
	itr=vct.begin();
	vct.erase(itr+3) ;
 	itr=vct.begin();
	vct.erase(itr+2,itr+5);  
	itr=vct.begin(); 
	
		while(itr!=vct.end())
	{
		cout<<*itr<<" ";
		itr++;
	}
	
	
	
	


return 0;
}

