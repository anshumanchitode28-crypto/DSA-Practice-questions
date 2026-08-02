//Max and Min in array
//logic - we will take an for loop for having an array elements then initializing min with plus infinity and max with minus infinity.

#include<iostream>
using namespace std;

int main() {
    int arr[]= {1,3,5,7,9};
    int size = 5;
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0 ;i< size;i++ ){
        if (arr[i]<min){
            min = arr[i];
        }
        else if(arr[i]>max){
            max = arr[i];
        }else{
cout<<"No max min are there";
        }
    }
    cout<<"The smallest element is : " <<min<<endl;
    cout<<"The largest element is : " <<max<<endl;
    return 0;
}
