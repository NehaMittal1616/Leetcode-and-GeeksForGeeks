class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        bool ans=true;
        int n=grid.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
              if((i==j && grid[i][j]==0))
              {
               ans=false;
              }
              if(i!=j && j!=(n-i-1) && grid[i][j]!=0)
              {
                ans=false;
              }

            }
              if( grid[i][n-i-1]==0)
              {
                ans=false;
              }
        }
       
        return ans;
    }
};