// #include<iostream>
// using namespace std; 

// int main(){

// int arr[5]={111,33,48,55,6};
// int i;
// int ans = arr[0];
// for(i=0; i<5; i++){
//     if(arr[i]> ans){
//         ans = arr[i];
//     }
// }
//     cout<<"The largest element is: "<<ans;
//     return 0;
// }


#include<iostream>
using namespace std;

int main()
{
    int n, max=0;
    cout<<"Enter the size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array elements: ";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    max = arr[0];
    
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout<<"Max element is: "<<max;
}