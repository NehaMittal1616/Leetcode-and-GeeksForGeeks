class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>>ans;
        vector<vector<int>>vis(rows, vector<int>(cols,0));
        vis[rCenter][cCenter]=1;
        queue<pair<int,int>>q;
        q.push({rCenter, cCenter});
        int r[4]={-1, 0,1,0};
        int c[4]={0,1,0,-1};
        ans.push_back({rCenter, cCenter});
        while(!q.empty())
        {
            int currow=q.front().first;
            int currcol=q.front().second;
            q.pop();

            for(int i=0;i<4;i++)
            {
                int adjr=currow+r[i];
                int adjc=currcol+c[i];
                if(adjr>=0 && adjr<rows && adjc>=0 && adjc<cols && vis[adjr][adjc]!=1 )
                {
                    q.push({adjr,adjc});
                    ans.push_back({adjr,adjc});
                   vis[adjr][adjc]=1;
                }
            }
        }
        return ans;
    }
};