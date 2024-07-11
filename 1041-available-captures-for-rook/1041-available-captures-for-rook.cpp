class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int count=0;
        int n=board.size();
        int m=board[0].size();
        int r[4]={-1,0,1,0};
        int c[4]={0,1,0,-1};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
      if(board[i][j]=='R')
      {
        int currow=i;
        int currcol=j;
        for(int k=0;k<4;k++)
        {
           int adjrow=currow+r[k];
        int adjcol=currcol+c[k];
         bool foundpawn=false;
        while(adjrow>=0 && adjrow<n && adjcol>=0 && adjcol<m)
        {
           
            if(board[adjrow][adjcol]=='p')
            {
                 foundpawn=true;
                 break;
            }
             if(board[adjrow][adjcol]=='B')
            {
                break;
            }
            adjrow += r[k];
            adjcol += c[k];
        }
        if(foundpawn)
            {
                count++;
            }
        }
        
      }
     }
        }
        return count;
    }
};