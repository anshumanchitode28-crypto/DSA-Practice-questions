// Type cast the float  prize to int prize and grades into int

#include <iostream>
using namespace std;

int main() {
 float Prize = 299.99;
 int newPrize = int (Prize) ; //Explicit type casting
 cout<<"The prize is "<<newPrize<<endl ;
 char grade = 'A';
 int Grade = grade ; //implicit type casting // it shows an ascii value in terminal
 cout<<"The grades are "<< Grade <<endl;

 return 0;
}
