class Solution {
public:
    int dominantIndex(vector<int>& nums) {
     int n=nums.size();
     int largest=*max_element(nums.begin(),nums.end());
     bool ans=true;
     for(int i=0;i<n;i++)
     {
        if(2*nums[i]>largest && nums[i]!=largest)
        {
            ans=false;
        }
     }
     if(ans)
     {
        for(int i=0;i<n;i++)
        {
            if(nums[i]==largest)
            {
                return i;
            }
        }
     }
     return -1;
    }
};