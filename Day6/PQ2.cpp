//Max water in the container
//height = [1 ,8, 6,2,5 4, 8 ,3 ,7]
// return max amount of water container can store 
#include<iostream>
using namespace std;

int main(){
  int  height[] =  {1 ,8, 6,2,5, 4, 8 ,3 ,7};
int n = size(height);
     int ans = 0;
    for(int i =0 ; i<n ; i++){
        for(int j = i+1 ;j<n; j++){
           int  w = j - i ; 
           int h = min(height[j] ,height [i]); 
           //the minimum hieght is considered for the area as if we consider the larger height bar the water would overflow
             int area = w * h ;
            ans = max(ans , area) ; // maximum from the recent area calculated and ans the stored area
        }
    }
    cout<<"Maximum water stored is "<< ans;
    return 0;
}
