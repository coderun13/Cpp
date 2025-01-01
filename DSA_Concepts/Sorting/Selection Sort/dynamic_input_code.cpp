#include<iostream>
using namespace std;

//Here the array is taken by the user at the run time.

int main ()
{
    int arr[1000];
    int n;
    
    cout<<"Tell the size of the array:"<<" ";
    cin>>n;
    
    cout<<"Give the elements of the array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    //To print unsorted array
    cout<<"The unsorted array is:"<<" ";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    //main logic
    for(int i = 0; i<n;i++)
    {
        int index = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[index])
            index = j;
        }
        swap(arr[i],arr[index]);            
    }

    //To print sorted array
    cout<<"\nThe sorted array is: "<<" ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}