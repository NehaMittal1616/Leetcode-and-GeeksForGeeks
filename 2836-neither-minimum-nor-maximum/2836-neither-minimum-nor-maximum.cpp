class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        if(n==2)
        {
            return -1; // one would be minimum and one would be maximum
        }
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            mini=min(mini, nums[i]);
            maxi=max(maxi, nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=mini && nums[i]!= maxi)
            {
                return nums[i];
            }
        }
        return -1;
    }
};