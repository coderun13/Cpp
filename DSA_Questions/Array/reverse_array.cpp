#include<iostream>
using namespace std; 

int main(){

int arr[5]={111,33,48,55,6};
int i,j,temp[5];
 i=5, i>=0;
 j=0,j<=5;
while(i<j){
    temp[j]= arr[i];
    i--,j++;
};
cout<<"The given array is: "<<arr[i]<<endl;
cout<<"The reverse array is: "<<temp[j];

}
