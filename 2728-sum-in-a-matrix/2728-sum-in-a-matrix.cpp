class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        // sort each row in ascending order then har ek column ka maximum number will be added to the score
        int n=nums.size(); // number of rows
        int m=nums[0].size();// number of columns
        for(int i=0;i<n;i++)
        {
            sort(begin(nums[i]) , end(nums[i])); 
        }
       
        // add har column ka max number to the score
        int score=0;
        for(int j=0;j<m;j++)
        {
             int maxi=INT_MIN;
            for(int i=0;i<n;i++ )
            {
                maxi=max(maxi, nums[i][j]);
               
            }
             score+=maxi;
        }
        return score;
    }
};