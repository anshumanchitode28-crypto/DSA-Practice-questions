//Write a function to print the prime numbers from 1 to n

#include<iostream>
using namespace std;

int isprime(int n){
    for ( int i = 2 ;i*i <=n; i++){
        if(n%i == 0){
        return false;
        }
    }
return true;
}

int main() {
    int n;
    cout<<"Enter the number n : ";
    cin>> n ;
    for(int i = 2; i<=n ;i++){
        if(isprime(i)){
            cout<< i <<" ";
        }
    }
    cout<<endl ;
    return 0;
}
