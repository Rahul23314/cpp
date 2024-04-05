#include<iostream>
#include<vector> 
// accessing the vector by using the []: 
using namespace std;
int main() 
{
  vector<int>vtr(5);
  int x,y;
  x=vtr.size();
  y=vtr.capacity();  
  for(int i=0;i<vtr.size();i++)
  {
  	cin>>vtr[i];
  }
  cout<<"\nsize= "<<x<<" "<<"capacity= "<<y<<endl;
  vtr.push_back(44);
  vtr.push_back(75);
  vtr.push_back(89);
  for(int i=0;i<=vtr.size()-1;i++)
  {
  	 cout<<vtr[i]<<" ";
  }  
   x=vtr.back();  
   y=vtr.front(); 
   cout<<endl;
   cout<<x<<"will be removed"<<endl;
  	cout<<y<<"is the front element  \n"<<endl;
   vtr.pop_back();  
    for(int i=0;i<=vtr.size()-1;i++)        // the size must be like n-1;
  {
  	 cout<<vtr[i]<<" ";
  } 
  
 
return 0;
}

