//Wrp for printing the patern 
/* 1 
   22
   333
   4444
   logic - firstly we have to apply the for loop for the n line print vertically upto n then for inner values we apply second loop 
   from j = 1 ;j < i+1 ; j++*/

   #include<iostream>
   using namespace std;

   int main(){
    int n;
    cout <<"Enter the number (n) ";
    cin>> n;
    for(int i = 0; i<n ;i++){
        for(int j = 0 ;j <i+1; j++){
            cout<< (i+1)<<" ";
        }
        cout<<endl;
    }
    return 0;
   }
   