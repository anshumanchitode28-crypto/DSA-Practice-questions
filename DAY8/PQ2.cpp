//Pair sum - Brute force 

#include <iostream>
#include<vector>
using namespace std;

int main() {
vector <int> arr = {1 , 2 , 3 , 4 , 5 , 6 };
int n = arr.size();
int target = 4;
// to find that which sum makes the pair equal to the target
for(int i = 0 ; i < n ; i++){
    for(int j = i+1; j < n ;j++){
        if(arr[i] + arr[j] == target){
            cout<< "The indexes are : "<< i <<" and "<< j <<endl;
        }
    }
}
return 0;
}
