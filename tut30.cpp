#include<iostream>
using namespace std;
class complex 
{
    int a,b;

    public:
    complex(){
        a=0;
        b=0;
    }
// constructor overloading in c++
complex(int x,int y){
    a=x;
    b=y;
}
complex(int x){
    a=x;
    b=0;
}
void printnumber(){
    cout<<"your number is "<<a<<" +" <<b<< "i"<<endl;
}

};
int main(){
    complex d1(4,5);
    d1.printnumber();


    complex d2(7);
    d2.printnumber();

    complex d3;
    d3.printnumber();

  //  complex d1(4,5);
   // d1.printnumber();



    return 0;
}