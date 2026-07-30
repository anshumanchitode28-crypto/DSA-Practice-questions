//write a function to find the minimum of numbers
#include<iostream>
using namespace std;

int Min(int a , int b){
    if(a>b){
        cout<<b<<"The minimum of the number is : " ;
    }else{
        cout<<a<<"The minimum of the munbers is :" ;
    }
    return 0;
}

int main(){
    cout<<Min(5,10);
return 0;
}
