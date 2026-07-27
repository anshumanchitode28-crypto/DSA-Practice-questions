//write a program to write a sum of all n odd numbers
#include<iostream>
using namespace std; 

int main(){
 int n ;
 cout<<"Enter the number : ";
 cin >> n;
 int oddSum = 0;
 for ( int i = 1; i<=n ; i++){
    if(i%2 != 0){
        oddSum = oddSum + i ;
    }
 }
 cout<< "The sum of n odd number is : "<< oddSum <<endl;
 return 0 ;
}
