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
        sum = sum * 10 + r;
        n = n / 10;
    }
    if (t == sum)
    {
        cout << sum << endl
             << "Palindrone number.";
    }
    else
    {
        cout << sum << endl
             << "Not a Palindrone number.";
    }
}