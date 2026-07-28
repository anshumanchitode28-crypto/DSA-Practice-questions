// WRP to print the patern
/* 1 2 3 4
   1 2 3 4
   1 2 3 4
   1 2 3 4
   logic use nested for loop  int i for the rectangle formation upto the n times then inside the for
   loop for insertion we will take another loop with j less than equal to n and print j
   */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter the number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
