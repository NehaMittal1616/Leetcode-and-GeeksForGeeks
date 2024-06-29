class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0;
        int nos=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                nos++;
            }
            else if(nums[i]>0)
            {
                pos++;
            }

        }
        return max(nos,pos);
    }
};