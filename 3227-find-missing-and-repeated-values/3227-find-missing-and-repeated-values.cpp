class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
     vector<int>ans(2);
     // ans[0]= twice
     // ans[1]=missing
     int n=grid.size();
      set<int>st;
      int actualsum=0;
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
            if(st.find(grid[i][j])!=st.end())
            {
                ans[0]=grid[i][j];
            }
            else
            {
                st.insert(grid[i][j]);
            }
         actualsum+=grid[i][j];
        }
          
      }  
      actualsum-=ans[0];
          int count=n*n;
          int reqsum=(count*(count+1))/2;
          ans[1]=reqsum-actualsum;
          return ans;
    }
};