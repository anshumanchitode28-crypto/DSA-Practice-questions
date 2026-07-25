//write a program for votting system (take an input from user)
#include <iostream>
using namespace std;

int main() {
 int age;
 cout<<"Please enter your age: ";
 cin>> age;
 if(age>18){
    cout<< "The user is eligible for voting";
 }else if(age == 18){
    cout<< "You are new candidates please register for voting.";
 }else{
    cout<< "Not eligible for voting.";
 }
 return 0;
}
