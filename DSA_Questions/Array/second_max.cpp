#include<iostream>
using namespace std;
int main(){
    int arr[7]= {1,2,3,4,15,66,7};
    int ans = INT8_MIN;

    //largest element
    for(int i=0;i<7;i++){
        if(arr[i]>ans)
        ans = arr[i];
    }
     //second largest
    int second_max= INT8_MIN;
    for(int i=0;i<7;i++){
        if(arr[i]!=ans)
        second_max = max(second_max,arr[i]);
    };
    cout<<"the second largest element is: "<<ans<<endl;
    cout<<"the second largest element is: "<<second_max;
}
