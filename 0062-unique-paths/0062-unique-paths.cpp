class Solution {
public:
// MEMORIZATION 
//  int countpaths(int i,int j,vector<vector<int>>&dp)
// {
//     if(i==0 && j==0)
//     {
//         return 1;
//     }
//     if(i<0 || j<0)
//     {
//         return 0;
//     }
//   if(dp[i][j]!=-1)
//   {
//     return dp[i][j];
//   }
//   int up=countpaths(i-1,j,dp);
//   int left=countpaths(i,j-1,dp);
//    return dp[i][j]= up+left;

// }

    int uniquePaths(int m, int n) {
        // using 2d dp for memorization
        // vector<vector<int>>dp(m, vector<int>(n,-1));
        // return countpaths(m-1,n-1, dp);
     
     // USING TABULATION
      vector<vector<int>>dp(m,vector<int>(n,0));
      dp[0][0]=1;
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
            if(i>0)
            {
                dp[i][j]+=dp[i-1][j];
            }
            if(j>0)
            {
                dp[i][j]+=dp[i][j-1];
            }
        }
      }
      return dp[m-1][n-1];
    }
};