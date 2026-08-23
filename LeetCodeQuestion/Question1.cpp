/*Maximum Sum of subarray by Kadane's algorithm (53)
logic - We have to writen the maximum sum of the subarrays element so we are applying loop 
to add on the index values in the curent sum and compairing it by the maximum sum
 which will be updated as per the iterations and conditions it is known as kadanae's algorithm because he optimized this code by
 applying some conditions like if the current sum is less than zero the current sum will be re intialized to 0 by which the time 
 was saved  */


#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> arr = {1 , 2, 3 ,4 ,5 };
    int currSum = 0;
    int maxSum = INT_MIN ;
    for(int val : arr){
currSum = currSum + val ;
maxSum = max(currSum , maxSum) ;
if(currSum < 0 ){
    currSum = 0; 
}

}
cout<<maxSum<<endl;
return 0;
}