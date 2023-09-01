#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int , int ); // constructor declaration

    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y) //------>this is a parametrized constructor as it takes 2 parameters
{
    a = x;
    b = y;
    // cout<<"hello world"<<endl;
}

int main()
{
    // implicit call
    complex a(4, 6) ;//b(5,7);
    a.printnumber();
    // explicit call
   complex b = complex(5, 7);
    b.printnumber();



    return 0;
}