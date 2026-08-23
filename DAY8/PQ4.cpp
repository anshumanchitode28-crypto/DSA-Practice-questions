//MaxSum of subarrays - Brute force

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1 ,2,3 ,4,5,6,7};
    int n = arr.size();
    int maxSum = INT_MIN;
for(int i = 0 ; i < n ; i++){
    int currSum = 0;
    for(int j = i ; j <  n ;j++){
        currSum = currSum + arr[j] ;
        maxSum = max(currSum , maxSum);
    }
}
cout<<"Max sum of the subarrays is : "<< maxSum<<endl;
return 0;
}
