//WRP to print the patern 
/*1 
  12
  123
  1234
  logic - for loop for vertical representation
   for loop for inner values  the constraints are j = 1 j < i+1  j++ and print j */

# include<iostream>
using namespace std;

int main(){ 
    int n;
    cout<<"Enter the number(n) ";
    cin>> n;
    for(int i = 0; i<n;i++){
        for(int j =1 ; j<i+1;j++){
            cout<< j ;

        }
        cout<<endl;
    }
    return 0;
}
