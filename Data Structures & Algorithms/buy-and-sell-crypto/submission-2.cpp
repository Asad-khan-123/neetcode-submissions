class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int n = prices.size();
        int i=0;
        int j=1;
        int profit;
        while(j < n){
            if(prices[j]>prices[i]){
                profit = prices[j]-prices[i];
                maxProfit = max(maxProfit, profit);
            } else{
               i=j;
            }
            j++;
        }
        return maxProfit;
    }
};
