// Vectors basic
/*Vectors they are dynamic in nature
it is a STL Container [STL - Standard template library which stores the data structures like this]
vector Functions
size 
push_back
pop_back
front - gives the output as first element of the vector
back - ives the output as a last element of the vector
at - it catches the index for displaying the element of the vector.
capacity
size of vector - no. of elements in vector
capacity of vector is created and updated simulteneously till the push_back elements endup.
(if the elements are more thn the vector size then the capacity of vectorincreses by its double)
 " & " is used in basic codes to represent that we are taking the value as pass by refrence
*/

#include<iostream>
#include<vector> //used to execute the vector data structure
using namespace std;

int main() {
    vector<int> arr;
    // cout<<arr[0]<<endl;
    // cout<<"Size = "<<arr.size()<<endl;
arr.push_back(23);
arr.push_back(35);
arr.push_back(67);
arr.push_back(89);//it adds on the element in the vector
arr.push_back(12);
arr.pop_back(); // deletes the last element

for(int val : arr){
    cout<<val<<endl;
}
return 0;
}
