#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0;
    cout << "Enter the num: ";
    cin >> n;

    while (n != 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    cout << "The reverse num is: " << sum;
}

// logic: num=123
// sum=0*10+3=3
// next sum=3 then (3*10+2=32)
//(32* 10) + 1 = 321