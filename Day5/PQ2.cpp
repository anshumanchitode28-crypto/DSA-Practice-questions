//using for loop to print the elements in array

#include<iostream>
using namespace std;

int main() {
    int n ;
    cout<<"Enter the number(n): ";
    cin>>n ;
    int sz = n;
    int arr[sz];

    for(int i = 0; i<sz;i++){
        cin>> arr[i];
    }
    for(int i = 0;i<sz;i++){
        cout<<"The element "<< (i+1) << " is : "<< arr[i]<< endl ;
    }
    cout<<endl;
    return 0;

}
