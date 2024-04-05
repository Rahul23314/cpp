 // inhritance 
 #include<iostream>
using namespace std; 
 // only public and protected get inherited from the parent the class 
 // if we inheite in the child as the private then all protedcted and public datamembers of the parent become private in the class child  
 // if we inherite the parent class protecte then all protected and public datamemebrs become protected in chilcd class 
 // if we inherite the parent class as the public then all protected and public datamebers will goes to the it's previous access specifiers section 
// protected datamembers are only accessible inside the member function of the class 
 class Parent
 {
 	private:
 		int x;
 	protected: 
 		int y; 
 	public:
 		int z;
 };
 class Child:private Parent 
 {
        public:
 		void show()
 		{
 			y=10;   // inheritaning parent members can use dirctly without any declaration 
		} 
		 
		 void assign();
 };  
 void Child::assign()
 {
 	Child obj;
 	obj.y=20;;
 }
int main()
{
 
Child obj;
obj.show(); 

cout<<sizeof(obj);

return 0;
}

