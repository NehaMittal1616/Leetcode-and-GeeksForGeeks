class Solution {
public:

int totalways(int index, int amount, vector<int>&coins, int n,vector<vector<int>>&dp)
{
    if(index==0)
    {
        if(amount%coins[0]==0)
        {
            return 1; // means we have got one way of achieving the target
            // we are not getting amount/coins[0] , bcz we do not need minimum number of coins , we need total number of ways of achieving the amount 
        }
        else
        {
            return 0;
        }
    }
    if(dp[index][amount]!=-1)
    {
        return dp[index][amount];
    }
    int nottake=totalways(index-1, amount,coins,n,dp);
    int take=0;
    if(coins[index]<=amount)
    {
        take=totalways(index, amount-coins[index], coins, n,dp);
    }
    // take waali path se kuch answer milega , nottake waali path se kuch answer milega 
    // we need total, so we will count
    dp[index][amount]= take+nottake;
    return dp[index][amount];
}
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1, -1));
        return totalways(n-1, amount,coins, n,dp); // till n-1 index, total number of ways of achieving amount
     
    }
};