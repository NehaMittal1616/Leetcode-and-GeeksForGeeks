class Solution {
public:
int func(int i, int n, vector<int>&dp)
{
    if(i==0) return 0;
    if(i==1) return 1;
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    return dp[i]=func(i-1,n,dp)+func(i-2, n,dp);
}

    int fib(int n) {
      vector<int>dp(n+1,-1);
     if(n==0) return 0;
     if(n==1) return 1;
     return func(n,n,dp);
    }
};