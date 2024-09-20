#include<iostream>
using namespace std; 

int main(){

int arr[5]={11,33,48,55,6};
int i;
int ans = arr[0];
for(i=0; i<5; i++){
    if(arr[i]< ans){
        ans = arr[i];
    }
}
    cout<<"The smallest element is: "<<ans;
    return 0;
}