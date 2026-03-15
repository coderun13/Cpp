#include <iostream>
using namespace std;

// series -> 0,1,1,2,3,5,8,13...

int main()
{
    int n1 = 0, n2 = 1, n3, n;
    cout << "Enter the number till where you want the series: ";
    cin >> n;
    cout << n1 << "," << n2;
    for (int i = 1; i <= n; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << "," << n3;
    }
}

// int main(){
//     int n;
//     cout<<"Enter the position: ";
//     cin>>n;
//     int arr[1000];

//     //first =0;
//     //second=1;
//     arr[0]=0;
//     arr[1]=1;

//     for(int i=2;i<=n-1;i++)
//     arr[i]= arr[i-1]+arr[i-2];

//     cout<<"The number in that position in the series is: "<<arr[n-1];
// }