#include<iostream>
using namespace std;
class shop
{
    // using array in classes
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
    void initcounter(void){counter=0;}
    void setprice(void);
    void displayprice(void);


};
void shop::setprice()
{
    cout<<"enter id of your item no."<<counter+1<<endl;//+1 means it will strat from 1 not from 0.
    cin>>itemid[counter];
cout<<"enter price of your item ."<<counter+1<<endl;
    cin>>itemprice[counter];
counter++;

}
void shop::displayprice(void){
for (int i = 0; i < counter; i++)
{
    cout<<"the price of item with id  "<<itemid[i]<<   "is"  <<itemprice[i]<<endl;
}
}
int main(){
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}