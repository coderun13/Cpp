#include <iostream>
using namespace std;
int main()
// {
//     int n, i;
//     cout << "Enter a number to check prime: ";
//     cin >> n;

//     for (i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "It is not a prime number";
//             break;
//         }
//     }
//     if (i == n)
//     {
//         cout << "It is prime number";
//     }
// }

// Prime number printing from 1-100;

{
    int n, k;
    cout << "Enter the nth term: ";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        for (k = 2; k < i; k++)
        {
            if (i % k == 0) // not prime don't print
            {
                cout << "";
                break;
            }
        }
        if (k == i) // prime print
        {
            cout << k;
        }
    }
}