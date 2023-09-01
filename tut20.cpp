#include<iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
void setdata(void)
{
    cout<<"enter the id"<<endl;
    cin>>id;
    count++;

}
void getdata(void)
{
    cout<<"the id of this employee is "<<id<<"and this is employee number"<<count<<endl;

}
static void getcount(void){
    cout<<"the value of count is"<<count<<endl;//static data function

}


};
// count is the static data member of class employee 
int employee::count;// deafault value is 0.// e.g.count=1000.

int main(){
    employee harry ,ashwin, harsh;
harry.setdata();
harry.getdata();
employee::getcount();

ashwin.setdata();
ashwin.getdata();
employee::getcount();

harsh.setdata();
harsh.getdata();
employee::getcount();



    return 0;
}