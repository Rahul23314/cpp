#include<iostream>
using namespace std;
int main() 
{
  string s1,s2;
  cout<<"Enter the first string "<<endl;
  getline(cin,s1);
  cout<<"Enter the Second string "<<endl;
  getline(cin,s2); 
  int len1=s1.length();
  int len2=s2.length();
  if(s1>s2)                                                   // we can do the direct comparison like the primitive datatype 
  {
  	cout<<s2<<" will go first in the dictory & having the length "<<len2<<endl;

  } 
  else if(s1==s2)
  {
  	cout<<"Both strings are equal, having length "<<len1<<endl;
  } 
  else
  {
  	cout<<s1<<" will go first in the dictory & having the length "<<len1<<endl;
  }

return 0;
}

