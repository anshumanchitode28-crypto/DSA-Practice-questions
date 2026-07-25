// conditional statements
// if else statement - Write a program to know the number is even or odd (take number as input)

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "The given number is even number."; // in even number the remender with 2 comes to be zero.
    }
    else
    {
        cout << "The given number is odd number."; // remender not equal to zero.
    }
    return 0;
}
