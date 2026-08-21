/* DECimal to binary conversion
logic
lests take  number 50 
method to find the binary num is divide the number by 2 and reverse the order of remainders 
50/2 remainder = 0 quotient = 25 
25/2 remainder = 1  quotient =12 
12/2 remainder = 0  quotient = 6
6/2  remainder = 0  quotient = 3
3/2  remainder = 1  quotient = 1
1/2  remainder = 1  quotient = 0
let it go till the quotient is not 0 so the binary number of 50 is 110010*/

#include<iostream>
using namespace std;

int DectoBin(int num){
int ans = 0 , power = 1 ; 

while (num>0){
   int remainder = num % 2 ;
   num = num / 2 ;
   ans = ans + (power*remainder);
   power = power * 10 ;
}
return ans;
}

 int main() {
int num = 50; // test case
 cout<<DectoBin(num);
 return 0;
}

