//reverse an array
// 2 pointers approch
// using swap function
/*logic create an one loop which will be starting from first index of array and incrementing 
and second loop which will be starting from size - 1  index of array and dicrementing the value
now for the swaping process we have to start one loop having condition start<end(considering both odd and even valued array.)
an at last swap(arr[start],arr[end]) */

#include<iostream>
using namespace std;

void reverseArray(int arr[] ,int sz){
    int start = 0 ,end = sz - 1 ;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1,2,3,5,6,7,8,0,10};
    int sz = 9;
    reverseArray(arr,sz);

    for(int i = 0; i<sz;i++){
        cout<< arr[i] << " ";

    }

    return 0;
}
