#include <iostream>
using namespace std;

int main()
{
    int n, fact;
    cout << "Enter number to get factorial: ";
    cin >> n;

    fact = n;
    for (int i = 1; i < n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is: " << fact;
}