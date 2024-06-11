class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
      int n=matrix.size();
      int m=matrix[0].size();
      vector<vector<int>>answer;
      answer=matrix;
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
            if(answer[i][j]==-1)
            {
                int maxi=INT_MIN;
                for(int k=0;k<n;k++)
                {
                    maxi=max(maxi,matrix[k][j]);
                }
                answer[i][j]=maxi;
            }
        }
      }
      return answer;

    }
};