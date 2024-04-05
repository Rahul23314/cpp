/*#include<iostream>
using namespace std; 
class Number
{
  private:
     int x,y;
  public:
	 Number(int a,int b)
	 {
      x=a;
	  y=b;	 	
	 }	 
	 
	 Number operator+(Number T2)
	 {
	   Number Ans;
	    Ans.x=x+T2.x;
		Ans.y=y+T2.y;
		return Ans;	
	 } 
	 void show()
	 {
	 	cout<<"The value of x is "<<x<<endl;
	 	cout<<"The value of y is "<<y<<endl;
	 }
};

int main()
{ 
	Number T1(2,3);
	Number T2(3,5); 
	Number T3=T1+T2;   // this the addition of the object is not possible 
     T3.show();

return 0;
}*/
#include<iostream>
using namespace std;

class Number { 

private:
    int x, y;

public:
  
  Number() 
  {
  	x=0;
  	y=0;
  }
    Number(int a, int b) {
        x = a;
        y = b;
    }

    Number operator+(Number T2)  
	{
        Number Ans;
        Ans.x = x + T2.x;
        Ans.y = y + T2.y;
        return Ans;
    }

    void show() {
        cout << "The value of x is " << x << endl;
        cout << "The value of y is " << y << endl;
    }
};

int main() {
    Number T1(2, 3);
    Number T2(3, 5);
    Number T3 ;
	T3= T1 + T2;
    T3.show();

    return 0;
}

