#include<iostream>
using namespace std; 
class Distance
{
	private:
		int mtr;
		int km; 
		public:
		Distance()
		{
		  
		}  
		int operator>(Distance temp)
		{
			int total1=km*1000+mtr;
			int total2=temp.km*1000+temp.mtr; 
			if(total1>total2)
			{
				return 1;
			} 
			else
			{
				return 0;
			}
		}
		friend istream &operator>>(istream &din,Distance &ptr); 
		friend ostream &operator <<(ostream& dout, Distance ptr);
}; 
istream &operator>>(istream &din,Distance &ptr)
{  
   cout<<"Enter the Km:"<<endl; 
   	din>>ptr.km; 
   	cout<<"Enter the mtr: "<<endl;
	din>>ptr.mtr;

	return din;
} 
ostream &operator <<(ostream& dout, Distance ptr)
{
	dout<<"km: "<<ptr.km<<" "<<"mtr: "<<ptr.mtr;
	return dout;
}  
// while using of the cout<< or cin>> for ostream or istream don't forget the second parameter which always works as the object and it returns the din or dout and it's catch by refernce 
int main()
{ 
  int n; 
  Distance *ptr; 
  int i,j;
  cout<<"Enter the Number of the distance that you want?";
  cin>>n;
  ptr=new Distance[n];   
  for(i=0;i<=n-1;i++)
  {
  	cout<<"Enter the "<<i+1<<" Distance"<<endl;
  	cin>>ptr[i];
  } 
  for(i=0;i<n-1;i++)
  {
  	for(j=0;j<n-1-i;j++)
  	{
  		if(ptr[j]>ptr[j+1])
  		{
  			swap(ptr[j],ptr[j+1]);
		}
	  }
  } 
  for(i=0;i<=n-1;i++)
  {
  	cout<<i+1<<"distance is:-> "<<ptr[i]<<endl;
  }
return 0;
}

