// sorting of the 8 integer array
 #include<iostream>
using namespace std;
int main()
{ 
  int num[8];
  cout<<"Enter the array"<<endl;
  for(int i=0;i<=7;i++)
  {
  	 cin>>num[i];
  } 
  for(int i=0;i<=7;i++)    // this is selection sort 
  {
  	for(int j=i+1;j<=7;j++)
  	{
  		if(num[i]>num[j])   // here comparison of the i and j elements 
  		{
  			int temp;
  			temp=num[i]; 
  			num[i]=num[j];
  			num[j]=temp;
  			
		  }
	  }
  }   
  for(int i=0;i<=7;i++)
  {
  	 cout<<num[i]<<" ";
  } 

return 0;
}

