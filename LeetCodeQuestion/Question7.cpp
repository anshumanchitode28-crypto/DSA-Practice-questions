//Pow(x,n) [leetcode question no. 50]
//logic - in this question the provided parameters are the number of which the power is to be taken out and the power of that num
//for that we have to apply the if consitions this is very easy question

#include<iostream>
using namespace std;
 double pow(int x , int n) {
    if(n == 0) return 1.0;
    if(x == 1) return 1.0;
    if(x == 0) return 0.0;
    if(x == 1 && n % 2 == 0) return 1.0;
    if(x == -1 && n % 2 != 0) return -1.0;

    long binform = n;
    if(n < 0){
        x = 1 / x ;
        binform = -binform;
    }
    double ans = 1 ;
    while(binform > 0){
        if(binform % 2 == 1){
ans = ans * x ;
        }
        x = x * x ;
        binform = binform / 2 ;
    }
    return ans ;
    
}
int main() {
cout<<pow(3 , 2)<<endl;

return 0;
}
