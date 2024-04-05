
#include<iostream> 
using namespace std; 
class Distance
{
	public: 
		int km; 
		int mtr;
	
};
int main()
{
	Distance d1,d2; 

  cout<<"Enter the kilometer";
  cin>>d1.km;
  cout<<"Enter the metre";
  cin>>d1.mtr;
	cout<<"The total distance is "<<(1000)*d1.km+d1.mtr; 
	

return 0;
}


