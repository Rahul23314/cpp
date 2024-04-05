#include<iostream>
using namespace std; 
class Node
{
	public:
		int data;
		Node *next;
};
int main()
{   Node *p;
	p=new Node(); 
	cout<<"Enter the data "<<endl;
    cin>>p->data;
    p->next=new Node();     // formation of another  runtime object and allocate it's address to previous one //imp step
    cout<<"Enter the data of the new object by using p"<<endl;;
    cin>>p->next->data;  
    p->next->next=NULL;
    cout<<"p->data: "<<p->data<<endl;
    cout<<"p->next->data: "<<p->next->data<<endl;

return 0;
}

