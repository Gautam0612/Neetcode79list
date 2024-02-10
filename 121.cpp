//NAME: GAUTAM SINGH MAHARA
// 10/02/2024
//BEST TIME TO BUY AND SELL STOCK
// Description: You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.


//APPROACH 1
//TWO POINTER
// Time: O(n)
// Space: O(1)

void solution(){
    int  l=0 , r =1;
    vector<int> prices = {7,1,5,3,6,4};
    int maxP=0;
    while (r < prices.size())
    {
        if(prices[l] < prices[r]){
            maxP = max(maxP, prices[r] - prices[l]);
        }
        else{
            l = r;
        }
        r++;
    }
    return maxP;
    
}