//Question no. 852 Peak index in mountain array

#include<iostream>
using namespace std;
#include<vector>

int MountainPeak(vector<int> arr){
      int n = arr.size();
    int st = 0 , end = n ;
    while(st<=end){
        int mid = st + (end - st)/2;

        if(arr[mid - 1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }else if(arr[mid - 1]<arr[mid]){
            st = mid + 1 ;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {1 , 2 , 3 , 5 , 2 , 6};
  cout<<MountainPeak(arr);
  return 0 ;
}
