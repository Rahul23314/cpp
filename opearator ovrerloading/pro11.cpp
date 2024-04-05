#include<iostream>
using namespace std; 
class Distance
{ 
    private:
 	int km,mtr; 
 	public:
 		void operator~()
 		{
 			cout<<"Enter the distace in km "<<endl;
 			cin>>km;
 			cout<<"Enter the distance in mtr"<<endl;
 			cin>>mtr;
	    }
   
	friend int operator>(Distance D1,Distance D2);
}; 
int operator>(Distance D1,Distance D2)
{
	int total1=D1.km*1000+D1.mtr;
	int total2=D2.km*1000+D2.mtr;
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
	Distance D1,D2;
	~D1;
	~D2;
	if(D1>D2)
	{
		cout<<"D1>D2"<<endl;
	} 
	else
	{
		cout<<"D2<D2"<<endl;
	}


return 0;
}

