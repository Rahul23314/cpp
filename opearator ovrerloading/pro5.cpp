 
 //sort the 8integers in the ascending order   
 #include<iostream>
 
using namespace std; 

int main()
{ 
 int arr[8];
 for(int i=0;i<=7;i++)
 {  
    cout<<"Enter the "<<i+1<<endl;
 	cin>>arr[i];
 } 
 for(int i=0;i<=7;i++)
 {
 	for(int j=i+1;j<=7;j++)
 	{
 		if(arr[i]>arr[j])
		 {
		   swap(arr[i],arr[j]);
		   	
		 }
	 }
 } 
 for(int i=0;i<=7;i++ )
 {
 	cout<<arr[i]<<endl;
 }


return 0;
}

