class Solution {
public:


// recursion and memoization
// we can further space optimize it using tabulation

//    int func(int i , int j , string &word1, string &word2, vector<vector<int>>&dp)
//    {
// if(i<0)
// {
//     // word1 is exhausted , we need to insert j+1 elements
//     return (j+1);
// }
// if(j<0)
// {
//     // string 2 is exhausted 
//     // we need to delete i+1 elements
//     return (i+1);
// }
//   if(dp[i][j]!=-1)
//   {
//     return dp[i][j];
//   }
//     if(word1[i]==word2[j])
//     {
//         // no need to be done 
//         dp[i][j]= 0+ func(i-1,j-1, word1, word2, dp);
//     }

//     else // characters of word1 & word2 does not match
//     {
//    int insert=  func(i,j-1, word1, word2, dp);
//    int deletechar=func(i-1, j, word1, word2,dp);
//    int replace=func(i-1,j-1,word1,word2,dp);
//    dp[i][j]= 1+ min(insert, min(deletechar, replace));
    
//     } 
//     return dp[i][j];

//    }


    int minDistance(string word1, string word2) {
//        int n=word1.size();
//        int m=word2.size();
//    vector<vector<int>>dp(n,vector<int>(m,-1));
//        return func(n-1, m-1, word1, word2, dp);



// USING TABULATION
   int n=word1.size();
   int m=word2.size();
   vector<vector<int>>dp(n+1, vector<int>(m+1,0));
   

   // base case
   for(int i=0;i<=n;i++) dp[i][0]=i;
   for(int j=0;j<=m;j++) dp[0][j]=j;


   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=m;j++)
    {
        if(word1[i-1]==word2[j-1])
        {
            dp[i][j]=0+dp[i-1][j-1];
        }
        else
        {
            int insert=dp[i][j-1];
            int deletechar=dp[i-1][j];
            int replace=dp[i-1][j-1];
            dp[i][j]=1+ min(insert, min(deletechar, replace));
        }
    }
   }
   return dp[n][m];

    }
};