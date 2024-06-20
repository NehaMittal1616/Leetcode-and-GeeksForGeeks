class Solution {
public:
// for each element , we can either pick that element to be a part of our lis or not depending on previous index element

//     int func(int index, int previous , vector<int>&nums ,int n, vector<vector<int>>&dp)
//     {
//         if(index==n)
//         {
//             return 0;
//         }
// if(dp[index][previous+1]!=-1)
// {
//     return dp[index][previous+1];
// }
//         int pick=0;
//          if(previous==-1 || nums[previous]<nums[index] )
//          {
//              pick=1+func(index+1, index, nums,n, dp);
//          }
       
//        int notpick=0+func(index+1,previous, nums,n,dp);
//        dp[index][previous+1]= max(pick , notpick);
//             return dp[index][previous+1];
//     }

    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        // vector<vector<int>>dp(n,vector<int>(n+1,-1));
        // // did coordinate shifting 
        // return func(0,-1,nums, n,dp);

        // FURTHER OPTIMIZATION USING TABULATION 
     vector<vector<int>>dp(n+1,vector<int>(n+1,0));
     for(int ind=n-1; ind>=0;ind--)
     {
        for(int prev=ind-1; prev>=-1; prev--)
        {
            int notpick=0+dp[ind+1][ prev+1];
            int pick=0;
            if(prev==-1 || nums[ind]>nums[prev])
            {
              pick=1+dp[ind+1][ind+1];
            }
             dp[ind][prev+1]=max(pick,notpick);
        }
       
     }
         return dp[0][-1+1];
    }
};