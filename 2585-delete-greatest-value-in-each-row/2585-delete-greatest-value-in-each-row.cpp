class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
     int n=grid.size(); // number of rows
     int m=grid[0].size();// number of cols 
     int ans=0;
     vector<vector<int>>vis(n,vector<int>(m,0));
      // we have to perform the operations m number of times 
     for(int i=0;i<m;i++)
     {
        set<int>st;
        for(int j=0;j<n;j++)
        {
            int rowmax=0;
            for(int k=0;k<m;k++)
            {
               if(grid[j][k]>=rowmax && vis[j][k]!=1)
               {
                rowmax= max(rowmax,grid[j][k]);
               }
            }
            for(int k=0;k<m;k++)
            {
                if(grid[j][k]==rowmax && vis[j][k]!=1)
                {
                    vis[j][k]=1;
                    break;
                }
            }
            st.insert(rowmax);
        }
        int maxofall=*st.rbegin();
        ans+=maxofall;
     }
     return ans;
    }
};