class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,0));
      int top=0;
      int bottom=n-1;
      int left=0;
      int right=n-1;
       int num=1;
        while(top<=bottom && left<=right)
        {
            // fill the top row
            for(int i=left;i<=right;i++)
            {
                ans[top][i]=num;
                num++;
            }
            top++;

            // fill the right column from top to bottom
            for(int i=top ;i<=bottom;i++)
            {
                ans[i][right]=num;
                num++;
            }
            right--;
            // fill the bottom row if exists from right to left
            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    ans[bottom][i]=num;
                    num++;
                }
                bottom--; 
            }

          // fill the left column if it exits from bottom to top
          if(left<=right)
          {
            for(int i=bottom;i>=top;i--)
            {
                ans[i][left]=num;
                num++;
            }
            left++;
          }
         
      }
      return ans;

    }
};