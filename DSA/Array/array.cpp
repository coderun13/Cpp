/**
 * Array-> It store same type of data type and store at contiguous location
 * Declaring array -> EX-> int a[100]; 
 * index -> size-1
 * Byte addressable memory[every byte has unquie address] 
 * zero based indexing-> to find address formula = [arr + index*size of data type]
 */


#include<iostream>
using namespace std; 

int main(){
int arr[5]={1,3,8,5,6};
for(int i=0;i<6;i++)
cout<<arr[i]<<" "; //elements in array
cout<<"\n";
cout<<sizeof(arr)<<" "<<endl; //size of array
cout<<sizeof(arr)/sizeof(arr[0])<<" "; //no of elements in array
}