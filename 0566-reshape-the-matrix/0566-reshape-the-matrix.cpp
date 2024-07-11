class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        // case of not possible 
        if((m*n)!=(r*c))
        {
            // if  number of elements not equal -> then reshape operation is not possible 
            // simply return the given matrix 
            return mat;
        }
           // first convert 2d array into 1d
           vector<int>arr;
           arr.reserve(n*m);
           for(int i=0;i<n;i++)
           {
            for(int j=0;j<m;j++)
            {
            arr.push_back(mat[i][j]);
            }
           }

           vector<vector<int>>ans(r,vector<int>(c));
         // now covert the 1d array into 2d of r*c dimensions 
         int index=0;
         for(int i=0;i<r;i++)
         {
            for(int j=0;j<c;j++)
            {
                ans[i][j]=arr[index++];
            }
         }
         return ans;
        
    }
};