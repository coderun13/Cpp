#include<iostream>
using namespace std;

//function to rotate
void rotate(int arr[]/*pointer*/ ,int n){
    int last = arr[n-1];
    for(int i =n-2;i>=0;i--)
    arr[i+1]=arr[i];
    arr[0] = last;

}

int main(){
    int arr[100]= {2,4,6,7,5};
    int n=5;

    //printing given array
    cout<<"Real array: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    //printing rotated array
    rotate(arr,n);
    cout<<"Rotated array: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}