/* Book Alocation Problem
There are N books, each ith book has A[i] number of pages.

you have to allocate book to M number of students so that the maximum number of pages alllocated to student is minimum.

Each book Should be allocated to the students.
Each student has to be allocated at least  one book
Allotment should be in contigous order
calculate and return that minimum possible number.

Return -1 if a valid assignment is not possible */

#include <iostream>
using namespace std;
#include <vector>

bool isValid(vector<int>arr ,int n , int m ,int maxAllowedPages){
    int student = 1 ; int pages = 0 ;
    for (int i = 0 ; i < n ; i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }
        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i] ;
        }
        else{
            student++;
            pages = arr[i];
        }
    }
    return student > m ? false : true;
}


int allocateBooks(vector<int> &arr , int n , int m ) //N are the books arr elements are the pages od the books , M are the students
{ //if students are more then books
    if(m>n){
        return -1;
    }
    int sum = 0 ; 
    for(int i = 0 ; i < n;i++){ //adding all the pages
        sum += arr[i];
    }
    int ans = -1;
    int st = 0 , end = sum ; //range of possible ans

    while(st<=end){
        int mid = st + (end - st)/2 ;
        if(isValid(arr , n , m ,mid)){
            ans = mid ;
            end = mid - 1; // the mid is the temporory ans value we have to find the lesser value then mid so we shifts to left
        }
        else{ // Right
            st = mid + 1;
        }
    }
    return ans ;
}
int main() {
vector<int> arr = { 2 , 4 , 5 , 6 , 9 };
int n = 5 , m = 3;

cout<<allocateBooks(arr , n , m );

return 0 ;
}
