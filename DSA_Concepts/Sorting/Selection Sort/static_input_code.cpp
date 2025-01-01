#include<iostream>
using namespace std;

//Here the array is predetermined.

int main ()
{
    int arr[6] = {10,11,2,3,5,4};

    //To print unsorted array
    cout<<"The unsorted array is:"<<" ";
    for(int i = 0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }

    //main logic
    for(int i = 0; i<5;i++)
    {
        int index = i;
        for(int j=i+1; j<6; j++)
        {
            if(arr[j]<arr[index])
            index = j;
        }
        swap(arr[i],arr[index]);            
    }

    //To print sorted array
    cout<<"\nThe sorted array is: "<<" ";
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}