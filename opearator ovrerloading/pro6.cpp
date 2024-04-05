
#include<iostream>
using namespace std; 
class Distance
{
	public: 
	int km,mtr;
	
		Distace ()
		{
			cout<<"Enter the KM "<<km<<endl;
			cin>>km;
			cout<<"Enter the meter "<<mtr<<endl;
			cin>>mtr;
	  	} 

	
}; 
ostream & operator<<(ostream &dout,Distance Temp) 
{
	cout<<Temp.km<<" "<<Temp.mtr<<endl; 
	return dout;
} 
Distance operator=(Distance Ans)
{   Distance Temp;
    Temp.x=Ans.x;
    Temp.y=Ans.y;
	return Temp;
	
} 
	int operator>(Distance temp1,Distance temp2)
	{
		int total1=temp1.km*1000+temp1.mtr;
		int total2=temp2.km*1000+temp2.mtr;
		  if(total1>total2)
		  
		  {
		  	return 1;
          }
		  else
		  {
		  	return 0;
		  }
		   
	}
int main()
{
  Distance dist[8];
  for(int i=0;i<=7;i++)
  {
  	for(int j=i+1;j<=7;j++)
  	{ 
  	    if(dist[i]>dist[j])
  	  {
  	  	   Distance temp;
  	  	   temp=dist[i];
  	  	   dist[i]=dist[j];
  	  	   dist[j]=temp;
		}
	  }
  }  
  for(int i=0;i<=7;i++)
  {
  	cout<<dist[i]<<endl;
  }

return 0;
} 


