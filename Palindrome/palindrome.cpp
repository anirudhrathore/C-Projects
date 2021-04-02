#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the number : ";
    cin>>a;
    if(a%2!=0 && a%3!=0)
    {
        cout<<"The number is a palindrome";
    }
    else
    {
        cout<<"The number is not a palindrome";
    }
}