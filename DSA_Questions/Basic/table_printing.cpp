#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number to get the table: ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

// Reverse table
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a number to get the table: ";
//     cin >> n;
//     for (int i = 10; i >= 1; i--)
//     {
//         cout << n << " x " << i << " = " << n * i << endl;
//     }
// }