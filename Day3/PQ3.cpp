//WRP to print thr pattern 
// *
// **
// ***
/*logic first we will have a for loop for iteration up to down till n then to insert the values in the iteration we will take next 
loop from j = 0 to j = i+1 and increment till the condition becomes false
*/
# include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number : ";
    cin>> n;
    for(int i =0 ; i<n ;i++){
        for(int j = 0 ;j<i+1;j++){
            cout<< "* " ;
        }
        cout<<endl;
    }
    return 0;
}
