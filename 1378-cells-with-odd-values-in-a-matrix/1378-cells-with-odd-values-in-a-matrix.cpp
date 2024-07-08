class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>>grid(m,vector<int>(n,0));
        // m is the number of rows and n is the number of columns 

        for(auto it:indices)
        {
            int rowi=it[0];
            int coli=it[1];

            for(int j=0;j<n;j++)
            {
                grid[rowi][j]++;
            }

            for(int i=0;i<m;i++)
            {
              grid[i][coli]++;
            }
        }
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]%2!=0) count++;
            }
        }
        return count;
    }
};