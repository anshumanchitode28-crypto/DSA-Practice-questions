//WRP to print the pattern 
/* 1
   21
   321
   4321
   logic- for loop for the vertical representation
   for loop for inner values the constraints are j = n, j>0 , j--*/

   #include<iostream>
   using namespace std;

   int main() {
    int n;
    cout<<"Enter the number (n): ";
    cin>> n;

    for(int i = 0;i<n;i++ ){
        for(int j=i;j>0;j--){
            cout << j;
        }
        cout<<endl;
    }
    return 0;
   }
