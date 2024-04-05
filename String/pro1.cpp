//string- it is class which is pre-defined in the cpp and by using it's object we can access them. We can use  them like primitive datatype.In the string there is no any problem is occuring like base address
#include<iostream>
using namespace std;
int main()
{ 
string s1="Hello"; 
cout<<s1; 
cout<<endl;
cout<<"Enter the string"<<endl; 
string s2;
getline(cin,s2);   // getline is used for taking input string from the user parameters are cin: for the source and another is string name. 
string s3;
s3="Morning rahul";
string s4;
s4=s1+" "+s2+" "+s3;  // this is concatanation, due after the concatanation there is no any change is occurs in the original strings 
cout<<s4; 
cout<<"Original First String is :-> "<<s1<<endl; 
cout<<"Original Second String is :-> "<<s2<<endl; 
cout<<"Original Third  String is :-> "<<s3<<endl;



return 0;
}

