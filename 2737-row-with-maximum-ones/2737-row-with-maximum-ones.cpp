class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
      int n=mat.size();
      int m=mat[0].size();
       vector<int>ans(2);
       int maxones=0;
       int rowindex=0;
       for(int i=0;i<n;i++)
       { 
        int maxinrow=0;
        for(int j=0;j<m;j++)
        {
        if(mat[i][j]==1)
        {
            maxinrow++;
        }
        if(maxinrow>maxones)
        {
            maxones=maxinrow;
            rowindex=i;
        }
        }
       }
       return {rowindex, maxones}; 
    }
};