#include<iostream>
using namespace std;

int main(){
    //array example
    int marks[]={23,34,56,78};
               
    int mathmarks []={567,678,789,876};
    cout<<"these are maths marks"<<endl;
cout<<mathmarks[0]<<endl;
cout<<mathmarks[1]<<endl;
cout<<mathmarks[2]<<endl;
cout<<mathmarks[3]<<endl;
// you can change the value of an array
marks[2]=432;
cout<<"these are marks"<<endl;
//cout<<marks[0]<<endl;
//cout<<marks[1]<<endl;
//cout<<marks[2]<<endl;
//cout<<marks[3]<<endl;

//for (int i = 0; i < 4; i++)
//{
 //   cout<<"the value of marks"<<i<<" is "<<marks[i]<<endl;
    
//}
// using  while loop
//int i= 0;
//while(i<4){
  //  cout<<"the value of marks"<<i<<" is" <<marks[i]<<endl;
    //i++;
    //}
// using do while loop
//int i=0;
//do{
  //  cout<<"the value of marks"<<i<<" is"<<marks[i]<<endl;
//i++;
//} while(i<4);
  // pointers and arrays
  int*p= marks;
  cout<<*(p++)<<endl;
  cout<<*p<<endl;   // increment of one from 23 to 34.
  cout<<*(++p)<<endl;   // increament then print p.
  cout<<"the address of *p is "<<marks<<endl;
    //cout<<"the value of*p is "<<*p<<endl;
    //cout<<"the value of*(p+1) is "<<*(p+1)<<endl;
      //cout<<"the value of*(p+2) is "<<*(p+2)<<endl;
        //cout<<"the value of*(p+3) is "<<*(p+3)<<endl;
    return 0;
}