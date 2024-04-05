 // foramtion of the linked list . In the linked list there is data and atsecond term is address of next node.there is formation of  object and runtime pointer to object(Runtime means by using the New opeartor) 
 #include<iostream>
using namespace std;
class Node
{
	public: 
	  int data;
	  Node *next;   // this is pointer 
};

int main()
{
  Node T1,T2,T3; 
  
  cout<<"Enter the data of 1st object: "<<endl;
  cin>>T1.data;
  T1.next=&T2;   // this is linking of the next with the address of next node
 cout<<"Enter the data 2nd object:"<<endl;
  cin>>T2.data;
   T2.next=&T3; 
    cout<<"Enter the data 3rd object "<<endl;
  cin>>T3.data;
   T3.next=NULL; 
   // printing the data with the only help of the T1;
   cout<<"T1.data "<<T1.data<<endl<<"T1.next->data "<<T1.next->data<<endl<<"T1.next->next->data "<<T1.next->next->data ;

return 0;
}
/* for(int i=1;i<=3;i++)
   {
   
  cout<<"Enter the data of "<<i<<" object"<<endl;
  cin>>T[i].data;
  T[i].next=&T[i+1];   // this is linking of the next with the address of next node
  }
  */

