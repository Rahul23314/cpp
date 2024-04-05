// there is pointer to object which alreadt stores the address of the T1 object, add T2,T3 and print the data by using the p 
#include<iostream>
using namespace std; 
class Node
{
	public: 
		int data;
		Node *next;		
};
int main()
{ 
	Node T1,T2,T3;
	Node *p;
	p=&T1;   // this containing the address of the T1 object in it 
	cout<<"Enter the data of 1st object: "<<endl;
  	cin>>T1.data;
  	T1.next=&T2;   // this is linking of the next with the address of next node
 	cout<<"Enter the data 2nd object:"<<endl;
  	cin>>T2.data;
    T2.next=&T3; 
    cout<<"Enter the data 3rd object "<<endl;
    cin>>T3.data;
    T3.next=NULL; 
   // printing the data with the only help of the p;
   cout<<"p->data "<<p->data<<endl<<"p->next->data "<<p->next->data<<endl<<"p->next->next->data "<<p->next->next->data<<endl;

return 0;
}

