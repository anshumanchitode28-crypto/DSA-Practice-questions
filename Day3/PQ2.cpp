// wrp to print the patern 
/*
123
456
789
*/
/*Logic - first for the rectangle formation we would take one loop with i  1 upto the n 
then to insert the values next for loop with j variable from 1 to n and printing the number */
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Please enter the number(n): ";
    cin>> n;
    int num = 1;
    for(int i = 0 ;i<=n ;i++){
for(int j = 1; j<=n ;j++){
    cout<< num<<" ";
    num++;
}
cout<<endl;
    }
    return 0;
}
