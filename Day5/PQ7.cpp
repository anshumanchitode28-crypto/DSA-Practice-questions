//write a program to swap the minimum and maximum of array elements

#include<iostream>
using namespace std;

int getMinIndex(int arr[], int sz){
    int minIndex = 0 ;
    for(int i=0; i<sz; i++){
        if(arr[i]<arr[minIndex]){
          minIndex = i;
        }
    }
    return minIndex;
}
int getMaxIndex(int arr[], int sz){
    int maxIndex = 0 ;
    for(int i=0; i<sz; i++){
        if(arr[i]>arr[maxIndex]){
          maxIndex = i;
        }
    }
    return maxIndex;
}

void swap(int arr[], int sz){
    int minIndex = getMinIndex(arr, sz);
    int maxIndex = getMaxIndex(arr, sz);
    swap(arr[minIndex] , arr[maxIndex]);
}

int main() {
    int arr[] = {1,2,3,4,5,7,9,12};
    int sz = size(arr);
    swap(arr,sz);
    for(int i=0;i<sz;i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}

