class Solution {
public:

int minpathsum(int i,int j, vector<vector<int>>& triangle, int n, vector<vector<int>>&dp)
{
  if(i==n-1)
  {
    return triangle[n-1][j];
  }
  if(dp[i][j]!=-1)
  {
    return dp[i][j];
  }
  int down=triangle[i][j]+minpathsum(i+1,j,triangle,n,dp);
  int diagnol=triangle[i][j]+minpathsum(i+1,j+1,triangle,n,dp);
  return  dp[i][j]= min(down,diagnol);
}

    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return minpathsum(0,0,triangle,n,dp);
    }
};