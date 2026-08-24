/*leetcode question no. 11 [container with max water]

logic - firstly we have to print maxWater stored in the container and the height vector will be provided
 so as we know the container area decides the water quantity so width * height
 for that purpose we have to find the width and height simulteneously by applying two pointer method lp is the left par and 
 rp is right part and updating the maxWater variable simulteneously at every itteration. */
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
       int maxWater = 0; //answer
       int lp = 0 , rp = height.size() -1;
       while(lp<rp){
        int w = rp - lp ;
      int  ht = min(height[lp], height[rp]);
        int currWater = w * ht ;
        maxWater = max(maxWater , currWater);
        if(height[lp]<height[rp]){
            lp++;
        }else{
            rp--;
        }

       }
        return maxWater;
    }
};