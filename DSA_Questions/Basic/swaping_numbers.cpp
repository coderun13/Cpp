#include <iostream>
using namespace std;
int main()

// With temp variable

// {
//     int a, b, temp;
//     cout << "Enter first number: ";
//     cin >> a;

//     cout << "Enter second number: ";
//     cin >> b;

//     temp = a;
//     a = b;
//     b = temp;
//     cout << "swapped values are: " << "new first number is: " << a << endl
//          << "new second number is: " << b;
// }

// without temp variable
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;
    cout << "new first number is: " << a << endl
         << "new second number is: " << b;
}