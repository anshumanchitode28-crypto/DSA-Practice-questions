//Calculate the sum and product of the all present array elements
#include<iostream>
using namespace std;

int sum(int arr[] , int size){
    int sum = 0;
    for (int i = 0 ; i <size ; i++){
        sum = sum + arr[i];
    }
    return sum ;
}

int product(int arr[] , int size){
    int product = 1;
    for (int i = 0 ; i<size; i++){
        product = product * arr[i] ;
    }
    return product;
}

int main() {
    int arr[] = {1,9,3,6,8,5};
    int sz= size(arr);
cout<< "The sum of all array element is : "<< sum(arr,sz)<<endl;
cout<<"The product of all array element is: "<<product(arr, sz)<<endl;

return 0;
}
