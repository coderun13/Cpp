#include<iostream>
using namespace std; 

int main(){

int arr[5]={111,33,48,55,6};
int i;
int x = 48;
for(i=0; i<5; i++){
    if(arr[i] == x){
        x = i;
        break;
    }
}
    cout<<"The element is found at index: "<<x;
    return 0;
}