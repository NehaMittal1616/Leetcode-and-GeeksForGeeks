class Solution {
public:

   int func(int i , int j , string &word1, string &word2, vector<vector<int>>&dp)
   {
if(i<0)
{
    // word1 is exhausted , we need to insert j+1 elements
    return (j+1);
}
if(j<0)
{
    // string 2 is exhausted 
    // we need to delete i+1 elements
    return (i+1);
}
  if(dp[i][j]!=-1)
  {
    return dp[i][j];
  }
    if(word1[i]==word2[j])
    {
        // no need to be done 
        dp[i][j]= 0+ func(i-1,j-1, word1, word2, dp);
    }

    else // characters of word1 & word2 does not match
    {
   int insert=  func(i,j-1, word1, word2, dp);
   int deletechar=func(i-1, j, word1, word2,dp);
   int replace=func(i-1,j-1,word1,word2,dp);
   dp[i][j]= 1+ min(insert, min(deletechar, replace));
    
    } 
    return dp[i][j];

   }


    int minDistance(string word1, string word2) {
       int n=word1.size();
       int m=word2.size();
   vector<vector<int>>dp(n,vector<int>(m,-1));
       return func(n-1, m-1, word1, word2, dp);

    }
};