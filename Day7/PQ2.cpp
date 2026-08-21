/*Bitwise operators questions*/

#include<iostream>

using namespace std;
 int main(){
    int a = 4 , b = 10;

    //now cout the bitwise  solutions
    cout<< (a & b)<<endl; // bitwise and  it gives true if and only if both the statements are true
    cout<< (a | b)<<endl; // bitwise or it gives true when any of the statement is true
    cout<< (a ^ b)<<endl; // xor if there are same values it gives false elsse it gives true

    return 0;
 }
 