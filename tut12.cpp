#include<iostream>
using namespace std;
void g();// function prototypes.
int sum (int a,int b){
    int c = a+b;
    return c;
}
//void g(){
  //  cout<<"hello world";

//}

int main(){
int num1,num2;
cout<<"enter first number"<<endl;
cin>>num1;
cout<<"enter the second no."<<endl;
cin>>num2;
cout<<"the sum is "<<sum (num1,num2);
    g();
    return 0;
}
void g(){
    cout<<"\n hello goodmorning";
}