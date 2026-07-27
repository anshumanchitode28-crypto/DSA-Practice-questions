//write a program to print a prime numbers using for loops
#include<iostream>
using namespace std;

int main() {
    int n ;
    cout<< "Enter the number :";
    cin>> n;
    for (int i = 2 ; i<=n ;i++ ){ //As in every number 1 as  factor therefore we are initializing i with 2
     bool isPrime = true;
     for(int j = 2 ;j*j<= i; j++){
        if(i%j == 0){
            isPrime =false;
            break;
        }
     }
     if(isPrime){
        cout << i << " " ;
     }
    }
    return 0;
}
