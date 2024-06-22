class Solution {
public:

int func(int i, int j , vector<int>&cuts, vector<vector<int>>&dp)
{
    if(i>j) return 0;
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    int mini=1e9;
    for(int index=i; index <= j ; index++)
    {
        int cost= (cuts[j+1]-cuts[i-1]) + func(i, index-1, cuts, dp) + func(index+1,j, cuts,dp);
         mini=min(mini, cost);
    }
   return dp[i][j]=mini;
}
    int minCost(int n, vector<int>& cuts) {
        int N=cuts.size();
        // n is basically the length of the stick
      cuts.insert(cuts.begin(), 0);  
      cuts.push_back(n);
      sort(cuts.begin(), cuts.end());
      vector<vector<int>>dp(N+1, vector<int>(N+1,-1));
      return func(1, N, cuts, dp);
    }
};