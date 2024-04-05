 #include<iostream>
using namespace std;

class Number
{
public:
    void show()
    {
        cout << "In show"<<endl;
    }

    void print()
    {
        cout << "In print"<<endl;
        show();
    }
};
int main()
{
	Number T1;
	T1.print();

return 0;
}


