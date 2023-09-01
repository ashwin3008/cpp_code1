#include<iostream>
using namespace std;
struct employee
{
    int eid;
    char favchar;
    float salary;
    /* data */
};
union money
{
    int rice;
    char car;
    float pounds;

};


int main(){
enum meal{breakfast,lunch , dinner};
meal m1= lunch;
meal m2=dinner;
cout<<m1<<endl;
cout<<m2<<endl;
cout<<(m1==1)<<endl;// is m1 equal to 1 ans is yes (1).


  // union money m1;
    //m1.rice=34;
    //m1.car= 'c';

    //cout<<m1.car<<endl;
    //cout<<m1.rice<<endl;


  // struct employee harry;
    //struct employee shubham;
    //struct employee rohan;
//harry.eid=1;
//harry.favchar='c';
//harry.salary=120000000;
//cout<<"the value is"<<harry.eid<<endl;
//cout<<"the value is"<<harry.favchar<<endl;
//cout<<"the value is"<<harry.salary<<endl;

    return 0;
}