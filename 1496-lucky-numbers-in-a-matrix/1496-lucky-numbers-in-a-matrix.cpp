class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        // get the minimumn of each row and maximum of each column then the common element will be our answer
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>mini;
        vector<int>maxi;

        for(int i=0;i<n;i++)
        {   
            int minele=INT_MAX;
             for(int j=0;j<m;j++)
             {
                  minele=min(minele,matrix[i][j]);
             }
             mini.push_back(minele);
        }

        for(int j=0;j<m;j++)
        {
            int maxele=INT_MIN;
            for(int i=0;i<n;i++)
            {
                 maxele=max(maxele, matrix[i][j]);
            }
            maxi.push_back(maxele);
        }
        vector<int>ans;
// mini matrix contains the minimumm of each row and maxi matrix contains maximum of each column
         for(int i=0;i<n;i++)
         {
            for(int j=0;j<m;j++)
         {
            if(matrix[i][j]== mini[i] && matrix[i][j]==maxi[j])
            {
                ans.push_back(matrix[i][j]);
            }
         }

         }
        return ans;

    }
};