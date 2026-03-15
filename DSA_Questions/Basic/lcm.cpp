#include <iostream>
using namespace std;
int main()
{
    int a, b, r, lcm;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    while (true)
    {
        lcm = a;
        r = a % b;
        if (r == 0)
        {
            break;
        }
        a = a * 2;
    }
    cout << "LCM is: " << lcm;
}