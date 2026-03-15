#include <iostream>
using namespace std;
int main()
{
    int a, b, r, hcf;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    while (true)
    {
        hcf = b;
        r = a % b;
        a = b;
        b = r;
        if (b == 0)
        {
            break;
        }
    }
    cout << "HCF is: " << hcf;
}