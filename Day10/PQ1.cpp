/*Bubble sorting*/

#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> arr ,int N ) {
    for (int i = 0 ; i < N ; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(vector<int>arr , int N){
    bool isSwap = false;
    for(int i = 0 ; i  < N-1; i++){
for(int j = 0 ; j <N-i-1; j++){
    if(arr[j]<arr[j+1]){
        isSwap = true;
swap(arr[j] , arr[j+1]);
    }
}
if(!isSwap){ //array is already sorted
    return ;
}
    }
}

int main() {
    vector<int> arr = {1 , 3 , 4 , 6 , 9 , 2 , 8 };
    int N = 7 ;
bubbleSort(arr , N);
printArray(arr , N);

return 0 ;
}
