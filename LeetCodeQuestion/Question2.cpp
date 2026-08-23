//Pair Sum -AQuestion no. (1)
/*Logic - We have to return the indexes on which the sum of the pair of the given array equals to the target
So firstly intializing all the required values like  start , end ,target the PairrSum(it will be inside the first  loop) as the current pair sum of the two indices So first applying the 
for loop up till the range st to n and the second loop from st + 1 to n 
 compare the Pairsum with the target simulteneously and at last return the indices on which the target is equal.
 */
#include<iostream>
using namespace std;
#include <vector>
 class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int st = 0;st< nums.size(); st++){
            for(int end =st + 1; end<nums.size();end++){
                if(nums[st] + nums[end] == target){
                    return {st , end} ;
                }
            }
        }
    return {};
    }
};