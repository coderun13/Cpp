#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enetr character to check: ";
    cin >> c;

    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
    {
        cout << "It is a vowel" << endl;
    }
    else
    {
        cout << "Not a Vowel" << endl;
    }
}