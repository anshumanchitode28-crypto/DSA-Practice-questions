//Factorial using loops
#include<iostream>
using namespace std;

int main(){
    int n ;
    cout <<"Enter the number  for factorial: ";
    cin>> n;
   int fact = 1 ;
   for(int i = 0 ;i<=n ;i++){
    if(i <= 0){
        fact = 1 ;
    }else{
        fact = fact * i ;
    }

   }
   cout<< "The factorial of given number is: "<< fact<<endl;
   return 0;
}
