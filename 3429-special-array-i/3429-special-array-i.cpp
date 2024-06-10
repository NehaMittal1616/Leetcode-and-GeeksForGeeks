class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
           if(nums[i]%2==0 && nums[i+1]%2==0)
           {
           // nums[i] and nums[i+1] both are even
           return false;
           }
           if(nums[i]%2!=0 && nums[i+1]%2!=0)
           {
            // both are even
            return false;
            
           }
        }
        return true;
    }
};