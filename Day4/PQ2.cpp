// write a function to check the prime number or not
# include<iostream>
using namespace std;

bool isPrime(int n){
   if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}


int main(){
    int n;
    cout<<"Enter the number : ";
    cin>> n ;
    if(isPrime(n) == true){
        cout<<"The given number is prime number";
    }else{
        cout<<"Non prime number";
    }
    return 0;
}
