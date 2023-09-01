// #include<iostream>
// using namespace std;

// int main(){
//     int value=0;
//     for(int i=5;i>0;i/=2){
//         for(int j=0;j<i;j++){
//             value++;
//         }
//     }
//     cout<<value<<endl;
//     int a=5/2;
//     cout<<a;
//     return 0;
// }
#include<iostream>
using namespace std;

int main() {
    int arr[200000];
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=0;int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]&&arr[i+1]>arr[i+2]){
         max+=arr[i+1];
        }
         if(arr[i]>arr[i+1]&&arr[i+1]<arr[i+2]){
         min+=arr[i+1];
        }
    }
    if(arr[0]>arr[1]){
        max+=arr[0];
    }
    else{
      min+=arr[0];
    }
        if(arr[n-1]>arr[n-2]){
        max+=arr[n-1];
    }
    else{
      min+=arr[n-1];
    }
    cout<<abs(max-min);
    return 0;
}