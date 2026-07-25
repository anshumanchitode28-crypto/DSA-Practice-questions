// Grading system for colleges by using nested if else.
#include <iostream>
using namespace std;

int main()
{
    double marks;
    cout << "Enter your Marks ";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Grade A";
    }
    else if (marks >= 80 && marks < 90)
    {
        cout << "Grade B+";
    }
    else if (marks >= 70 && marks < 80)
    {
        cout << "Grade B";
    }
    else if (marks >= 60 && marks < 70)
    {
        cout << "Grade C";
    }
   else if (marks >= 35 && marks < 50)
    {
        cout << "PASS";
    }
    else
    {
        cout << "FAIL";
    }

    return 0;
}
