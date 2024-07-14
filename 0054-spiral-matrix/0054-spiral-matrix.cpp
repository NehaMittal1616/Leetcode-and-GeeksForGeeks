class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();// number of rows
        int n=matrix[0].size();// number of columns 
        int top=0;
        int bottom=m-1;
        int left=0;
        int right=n-1;
         vector<int>ans;
         while(top<=bottom && left<=right)
         {
            // printing the top row from left to right
            for(int i=left;i<=right;i++)
            {
                ans.push_back(matrix[top][i]);
            }
            // moving the top pointer 
            top++;

            // printing the right column from top to bottom
            for(int i=top;i<=bottom;i++)
            {
                ans.push_back(matrix[i][right]);
            }
            // moving the right pointer
            right--;

            // printing the bottom row if exists
            if(top<=bottom)
            {
                // printing bottom row from right to left
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // printing the left column from bottom to top if exists
            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }


         }
   
     return ans;

    }
};