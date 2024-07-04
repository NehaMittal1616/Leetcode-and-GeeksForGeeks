class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size(); // number of rows
        int m=mat[0].size(); // number of columns
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                {
              bool isspecial=true;

              //check the entire row
               for(int k=0;k<n;k++)
               {
                if(mat[k][j]==1 && k!=i)
                {
                    isspecial=false;
                    break;
                }
               }

              // check the entire column
              for(int l=0;l<m;l++)
              {
                if(mat[i][l]==1 && l!=j)
                {
                    isspecial=false;
                    break;
                }
              }

              if(isspecial) count++;
                } 
            }
        }
        return count;
    }
};