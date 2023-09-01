# include<iostream>
using namespace std;
int main(){
    int age;
cout<<"tell me your age";
cin>>age;
// 1  selection control structure: if else if else ladder
//if(age<18){
  //  cout<<"you can't come to the party";

//}
//else if(age==18){
  //  cout<<"you are a kid and you will get a kid pass to the party";
//}
//else{
  //  cout<<"you can come to the party";
//}

// 2 selection control structure: switch case statement
switch (age)
{
case 18:
cout<<"you are 18 :\n";
    break;
case 22:
cout<<"you are 22 :\n";
break;
case 2 :
cout<<"you are 2 :\n"; 
break;
default:
cout<<"no special case :\n";
    break;
} 
cout<<"done with switch case";
return 0;
}