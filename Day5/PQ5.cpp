//linear search
/*logic
Aplly  loop to iterate the indexing in array then if the index value equals to targeted value then return the index*/
#include<iostream>
using namespace std;

int linearsearch(int arr [], int sz , int target){
    for(int i =0 ; i<sz ; i++){
        if(arr[i] == target){
            return i ;
        }
    }
    return -1;
}


int main() {
int arr[] = {1,2,3,4,5,6};
int sz = 15;
int target = 4;
cout<< linearsearch(arr,sz,target)<<endl;
return 0;

}
