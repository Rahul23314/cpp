#include<iostream> 
#include<vector>
using namespace std; 
// code for summation of the all float values present in the vector 
int main()
{
	vector<float>vtr(6);  
	for(int i=0;i<=5;i++)
	{
		cin>>vtr[i];
	}
	vector<float>::iterator itr;
	itr=vtr.begin();
	float sum=0;
	while(itr!=vtr.end())
	{
		sum=sum+*itr;
		itr++;
	}
	cout<<"Summation of the all vector elements is "<<sum<<endl;

return 0;
}

