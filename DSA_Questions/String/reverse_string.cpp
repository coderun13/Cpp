#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[] = "snehal";
    // by method
    // cout<<strrev(str);

    //iteration
    int length = strlen(str);
    for(int i=length-1;i>=0;i--)
    {
        cout<<str[i];
    }
}