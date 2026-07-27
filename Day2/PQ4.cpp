//print all the odd numbers using while loop

#include<iostream>
 using namespace std;

 int main(){
    int n;
    cout <<"Enter the limit upto which you want to print number : ";
    cin>> n ;
    int i = 1 ;
    while(i<=n){
        if(i%2 != 0){
            cout << i <<" ";
        }
        i++ ;
    }
    return 0;
 }
 