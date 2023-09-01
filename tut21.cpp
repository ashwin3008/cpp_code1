#include<iostream>
using namespace std;
class employee
{
    int id;
    int salary;
    public:
    void setid()
    {
        salary=122;
        cout<<"enter the id of employee"<<endl;
        cin>>id;

    }
    void getid()
    {
        cout<<"the id of this employee is "<<id<<endl;
    }
};
int main(){
    employee harry, lovish,shruti,rishu;
    harry.setid();
    harry.getid();
//employee fb[4];// array of objects
//for (int i = 0; i < 4; i++)
//{
   // fb[0].setid();
     //fb[0].getid();

//}

    
    return 0;
}