class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size(); // square matrix hai
        int prisum=0;
        int secsum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
           prisum+=mat[i][j];
                }

            }
        }

        for(int i=0;i<n;i++)
        {
            secsum+=mat[i][n-i-1];
        }

          int ans=prisum+secsum;

        if(n%2!=0)
        {
        // n is odd means there is one common element between prisum and secsum
       ans=  ans-mat[n/2][n/2];
        }
        return ans;
    }
};