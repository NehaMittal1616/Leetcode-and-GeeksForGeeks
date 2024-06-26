class Solution {
public:
// one way of solving this question is to generate the length of longest common subsequence og s and t
// if length of lcs of s and t is equal to length of s then true otherwise false

    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<vector<int>>dp(n+1, vector<int>(m+1,0));
        for(int i=1;i<=n;i++)
        {
  for(int j=1;j<=m;j++)
  {
    if(s[i-1]==t[j-1])
    {
        dp[i][j]=1+dp[i-1][j-1];
    }
    else
    {
        dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
    }
  }
        }
        return (dp[n][m]==n);
        
    }
};