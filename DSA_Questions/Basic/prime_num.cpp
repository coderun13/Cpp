#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter a number to check prime: ";
    cin >> n;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "It is not a prime number";
            break;
        }
    }
    if (i == n)
    {
        cout << "It is prime number";
    }
}

// Primew number printing from 1-100;