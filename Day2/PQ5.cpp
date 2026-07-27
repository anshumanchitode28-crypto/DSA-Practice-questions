//Print the sum of n numbers using loops
#include<iostream>
using namespace std;

int main () {
    int n ;
    cout<< " Enter the limit of the number upto which you have to claculate the sum : ";
    cin>> n ;
    int sum = 0 ;
    for(int i = 1 ; i <=n ; i++){
        sum = sum + i ;
    }
    cout <<" The sum of the number is: " << sum <<endl;
    return 0;
}
