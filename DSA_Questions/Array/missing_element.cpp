#include <bits/stdc++.h>
using namespace std;

int missingNumber(int n, vector<int>& arr)
{
    int sum = 0;
    //sum of array elements
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    //The expected sum
    int exp_Sum = (n * (n + 1)) / 2;

    // Returning the missing number
    return exp_Sum - sum;
}

int main()
{
    vector<int> arr = { 1, 2, 3, 5 };
    int n = 5;
    cout << "The missing number is: "<<missingNumber(n, arr);
    return 0;
}
