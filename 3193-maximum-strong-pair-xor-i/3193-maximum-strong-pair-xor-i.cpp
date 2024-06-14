class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
       int n=nums.size();
       int xorval=0;
       int maxzor=INT_MIN;
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<n;j++)
        {
            if(abs(nums[i]-nums[j])<=min(nums[i],nums[j]))
            {
            xorval=nums[i]^nums[j];
            maxzor=max(maxzor,xorval);
            }
        }
       }
       return maxzor; 
    }
};