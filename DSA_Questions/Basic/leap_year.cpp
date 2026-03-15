#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter the year to check: ";
    cin >> year;

    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
    {
        cout << "It is a leap year";
    }
    else if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0)
    {
        cout << "Not a leap year";
    }
    else if (year % 4 == 0 && year % 100 != 0 && year % 400 != 0)
    {
        cout << "Leap year";
    }
    else
    {
        cout << "Not a leap year";
    }
}