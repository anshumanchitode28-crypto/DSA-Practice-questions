//write a program which prints even numbers

#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter the number :" ;
    cin>> n ;
    for(int i = 1 ;i <=n ;i++){
        if(i%2==0){
            cout<< i <<" " ;
        }
    }
    return 0;
}
