// write a function to print 1 to n no. sum
#include<iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    for (int i = 1 ; i<=n ;i++){
        sum = sum + i ;
    }
    return sum;
}

int main(){
    int n ;
    cout<< "Enter the number: ";
    cin>> n;
    cout<<"The sum of n numbers is : "<< sum(n) <<endl;
    return 0;
}
