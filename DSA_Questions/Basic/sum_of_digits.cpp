#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0;
    cout << "Enter the number: ";
    cin >> n;

    while (n != 0)
    {
        r = n % 10; // get last digit
        sum += r;
        n = n / 10; // get the digits apart from last(that num is again be % and we will get last digit of that part)
    }
    cout << "Sum of digits is: " << sum;
}