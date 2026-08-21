/*Binary to decimal*/

#include<iostream>
using namespace std;

int BintoDecimal(int num){

    int ans = 0 , power = 1 ; //ans is the decimal number and power is 2^(0)

    while(num > 0 ){
        int remainder = num % 10 ;
        num = num/10 ; 
        ans = ans + (remainder * power);
        power = power * 2;

    }
    return ans;
}

int main() {
    int num = 10011011;

    cout<<BintoDecimal(num)<<endl;
    return 0;
}
