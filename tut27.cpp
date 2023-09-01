#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    // creating a constructor

    
    complex(void);//constructor declaration

    void printnumber(){
        cout<<"your number is "<<a<<" + "<< b<<"i"<<endl;
    }
};

complex :: complex(void) //------>this is a default constructor as it takes no parameters
{
    a=0;
    b=0;
 //cout<<"hello world"<<endl;
}
int main(){
    complex c1,c2,c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    
    return 0;
}