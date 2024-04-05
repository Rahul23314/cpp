// scan 6 city name and count how many times pune comes, by using strings 
 #include<iostream>
using namespace std; 
int loc=1;
int main()
{ 
	string s1[6]; 
	int count=0;
	for(int i=0;i<=5;i++)
	{
		cout<<"Enter the cityname "<<endl;
		getline(cin,s1[i]);
	} 
	for(int i=0;i<=5;i++)
	{
		if(s1[i]=="pune")    // we can direct compare the string as the primitive datatype 
		{
			count++;  
			 loc=loc+i;
			break;
		}
	}  
	
	if(count==1)
	{
		cout<<"Pune is present at the location "<<loc<<" in the list ";
	} 
	else
    {
      cout<<"Pune is not present ";
	}


return 0;
}

