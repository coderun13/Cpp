#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0, t;
    cout << "Enter the num: ";
    cin >> n;
    t = n;

    while (n != 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }
    if (t == sum)
    {
        cout << "It is an Armstrong number.";
    }
    else
    {
        cout << "It is not an Armstrong number.";
    }
}

// 153
// 1+5*5*5+3*3*3 = 1+125+27=153