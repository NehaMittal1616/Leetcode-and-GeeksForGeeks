class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
      int n=grid.size();
      if(grid[0][0]==1 || grid[n-1][n-1]==1)
      {
        return -1;
      }  

      int r[8]={-1,-1,0,1,1,1,0,-1};
      int c[8]={0,1,1,1,0,-1,-1,-1};
      vector<vector<int>>vis(n,vector<int>(n,0)); // visited array
      priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
      pq.push({1,{0,0}});
      vis[0][0]=1;
     
        while(!pq.empty())
        {
           int length=pq.top().first;
           int currow=pq.top().second.first;
           int currcol=pq.top().second.second;
           pq.pop();
            if (currow == n-1 && currcol == n-1) {
                return length;
            }

          for(int i=0;i<8;i++)
          {
            for(int j=0;j<8;j++)
            {
 int adjrow=currow+r[i];
 int adjcol=currcol+c[i];
 if(adjrow>=0 && adjrow<n && adjcol>=0 && adjcol<n && vis[adjrow][adjcol]!=1 && grid[adjrow][adjcol]==0)
 {
    pq.push({length+1, {adjrow, adjcol}});
    vis[adjrow][adjcol]=1;
 }

    }
          }
        }     
        return -1;
    }
};