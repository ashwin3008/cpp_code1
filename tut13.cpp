#include<iostream>
using namespace std;
int sum(int a,int b){
int c=a+b;
return c;
}
// this will not swap x and y
void swap(int a, int b){ // temp a b
int temp=a;              //4 4 5
a=b;                     //4 5 5 
b=temp;                  //4 5 4
}
// call by reference using pointers
void swapPointer(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
// call by refrence using c++ reference variables
// int &
int swapreferencevar(int&a,int&b){ // temp a b
int temp=a;                     // 4 4 5
a=b;                           // 4 5 5
b=temp;                     //4 5 4
return a;
}
int main(){
    int x= 4, y=5;
    cout<<"the sum of 4 and 5 is "<<sum(4,5)<<endl;
    cout<<" the value of x is "<<x<<" and the value of y is "<<y<<endl;
    //swap(x,y);// this will not swap a and b
    //swapPointer(&x,&y);// this will swap
   swapreferencevar(x,y);// this will swap
   // swapreferencevar(x,y)=765;
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;

        return 0;
}