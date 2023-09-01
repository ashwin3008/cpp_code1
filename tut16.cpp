#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
}
int sum(int a,int b, int c){
     cout<<"using function with 3 arguments"<<endl;
    return (a+b+c);
}
// calculate the volume of a cyclinder
int volume(double r, int h){
    return (3.14*r*r*h);
}
// calculate the volume of a cube
int volume (int a){
    return a*a*a;
}
// calculate the volume of a cuboid
int volume(int a, int b, int c){
    return(a*b*c);

}

int main(){
    cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;// same function se koi dikkat 
   //-----> nhi hi no. of arguments se verify kr leta hi
    cout<<"the sum of 3 ,7 and 6 is "<<sum(3,6,7)<<endl;
//cout<<"shvhj,g :\n";
cout<<" the volume of cyclinder is "<<volume(5,6)<<endl;
cout<<" the volume of cube is "<<volume(5)<<endl;
cout<<" the volume of cuboid is "<<volume(3,4,5)<<endl;
    return 0;
}
