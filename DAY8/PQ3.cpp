//OPTIMAL APROACH FOR PAIR SUM 

#include<iostream>
#include<vector>
using namespace std;

vector <int>pairSum(vector<int> arr , int target){
   int n = arr.size();
    vector<int> ans;
    int i = 0 , j = n -1 ;
    while(i<j){
        int pairSum = arr[i] + arr[j] ;
        if(pairSum > target){
            j--;
        }else if(pairSum< target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans ;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1 , 3 , 4 ,5 , 6 , 8};
 int target = 13 ;
 vector<int> ans = pairSum(arr , target);

 cout<< ans[0] <<" , "<<ans[1]<<endl;

return 0;
 }
 