#include<iostream>
using namespace std; 
class Distance
{  
  private:
  	int km,mtr; 
  	static int count;
	public:
		Distance()
		{
			km=0;
			mtr=0;
		}
		void  operator~()
		{  
		 
			cout<<"Enter the distance "<<count+1<<" KM "<<endl;
			cin>>km;  
			cout<<"Enter the distance "<<count+1<<" mtr"<<endl;
			cin>>mtr;
			
		} 
		void operator!()
		{
			cout<<"KM= "<<km<<" "<<" mtr= "<<mtr<<endl; 
			cout<<"The total distance is "<<km*1000+mtr<<endl;
		}
		
};
int Distance::count=0;
int main()
{   
  Distance D1,D2;
  ~D1;   // this is for scanning the data
  ~D2;  
  !D1;   // this is for printing the data
  !D2;


return 0;
}

