class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int t[n];
        t[0]=prices[0];
        int profit=0;
        
        for(int i=1; i<prices.size(); i++){
            t[i]=min(t[i-1], prices[i]);
            profit=max(profit, (prices[i]-t[i]));
        }
        return profit;
    }
};