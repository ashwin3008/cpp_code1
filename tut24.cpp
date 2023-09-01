#include <iostream>
using namespace std;

// forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex); // here we cant write o1 and o2
    // as forward declaration will not provide this data
    int sumcompcomplex(complex, complex);
};
class complex
{
    int a, b;
    //individually declaring functions as friends
    //friend int calculator ::sumrealcomplex(complex, complex);
    //friend int calculator ::sumcompcomplex(complex, complex);
//aliter: declaring the entire calculator class as friend
friend class calculator;
public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "your number is " << a << "  + " << b << "i" << endl;
    }
};
int calculator::sumrealcomplex(complex o1, complex o2)
{ // seprately declared
    return (o1.a + o2.a);
}
int calculator::sumcompcomplex(complex o1, complex o2)
{ // seprately declared
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);
    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << res << endl;
    int rec = calc.sumcompcomplex(o1, o2);
    cout << "the sum of complex part of o1 and o2 is " << rec << endl;

    return 0;
}