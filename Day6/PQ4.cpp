//Painter Partition Problem
/*
Given are N boards of length of each given in the form of array and M painters , such that each painter takes 1 unit 
of time to paint 1 unit of board.

The task to find the minimum time to paint all boards under the constraints that any painter will
 only paint continious sections of boards.*/

 #include<iostream>
 using namespace std; 
 #include<vector>

 bool isPossible(vector<int> arr , int N , int M , int MaximumtimeAlllowed){
int painter = 1 , time= 0;
for(int i = 0 ; i < N ; i++){
    if(arr[i] + time <=MaximumtimeAlllowed){
        time += arr[i];
    }else{
        painter++;
        time = arr[i];
    }
}
return painter <= M;
 }

 int minTimeToPaint(vector<int> arr , int N , int M){
    int sum = 0 , maxValue = INT_MIN;
    for(int i = 0 ; i < N ; i++){
sum += arr[i];
maxValue = max(maxValue , sum);
    }
    int st = 0 , end = sum  , ans = -1 ;
    while(st<=end){
        int mid = st + (end - st)/2 ;
        if(isPossible(arr , N , M ,mid)){ //left
end = mid - 1;
ans = mid; 
        }else{ //right
            st = mid + 1;
        }
    }
    return ans;
 }
 int main() {
vector <int> arr = {50 , 80 ,60 ,30 ,10};
int n = 5 , m = 3 ;

return 0;
 }
//The  less time would be printed