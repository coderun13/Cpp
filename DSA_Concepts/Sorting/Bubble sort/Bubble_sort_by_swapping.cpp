#include<iostream>
using namespace std;

int main ()
{
    int arr[1000];
    int n;

    //taking size input    
    cout<<"Tell the size of the array:"<<" ";
    cin>>n;
    
    //elements of array
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
    for(int i = n-2; i>=0;i--) //n-2 means no of swaping
    {
        bool swapped = 0;
        for(int j=0; j<=i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapped = 1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped == 0)
        break;        
    }

    //To print sorted array
    cout<<"\nThe sorted array is: "<<" ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}