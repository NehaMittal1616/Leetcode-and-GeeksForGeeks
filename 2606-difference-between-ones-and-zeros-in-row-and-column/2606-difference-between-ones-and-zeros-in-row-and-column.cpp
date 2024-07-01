class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size(); // number of rows
        int m=grid[0].size(); // number of columns
        vector<vector<int>>diff(n,vector<int>(m,0));
        
   // one array to store count of 1's in each row
   // one array to store count of 1's in each column

   vector<int>rowcount(n,0);
   vector<int>colcount(m,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==1)
            {
                rowcount[i]++;
                colcount[j]++;
            }
        }
    }
  
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
        diff[i][j]=(rowcount[i]+colcount[j])-((n-rowcount[i])+(m-colcount[j]));
    }
  }

    


         return diff;
    }
};