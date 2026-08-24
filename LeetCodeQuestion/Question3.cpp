/*Leetcode question no. 121 [Best time to buy and sell the stock]
logic - We have to  maximize our profit by choosing a single day to buy one stock and choosing a different day 
in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

we have to intialize the bestprize/base price as = prize[0] the initial prize at which the stock is taken then 
we have to initialize the maxProfit variable to store the max profiT and simulteniously compare the value of the maxprofit with the bestprize - currentprizes and also update the bestprize by compareing the mimnimu of current prize and best prize. and at last print the maxProfit */

#include<iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> prices){
    int maxProfit = 0 , bestPrize = prices[0];
    int n = prices.size();
    for(int i = 1 ; i < n ;i++){
        if(prices[i]>bestPrize){
            maxProfit = max(maxProfit,(prices[i] - bestPrize)); //compairing the profit simulteniously with every iteration
        }
        bestPrize = min(bestPrize , prices[i]);
    }

    return maxProfit ; 
}

int main() {
vector<int> Price = {25 , 95 , 100 , 99 , 12};

cout<<maxProfit(Price);
return 0;
}
