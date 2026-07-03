class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
           int mini=min(mini,prices[i]);
           maxi=max(maxi,abs(prices[i]-mini));
        }
        return maxi;
    }
};
