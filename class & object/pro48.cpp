#include<iostream>
using namespace std; 
// Passing one function to another function by address:
/* To cathch that function we have to use pointer to function concept
the declaration of the pointer is same as the dataype of the funcion but except the name of the function*/
void disp(void (*p) () )
{
	cout<<"In the disp function()"<<endl;
	p();
} 
void show()
{
	cout<<"In the show()"<<endl;
}
int main()
{
   disp(&show);

return 0;
} 

