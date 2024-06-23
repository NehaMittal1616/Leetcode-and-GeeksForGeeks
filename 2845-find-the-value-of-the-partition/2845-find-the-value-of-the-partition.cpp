class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int n=nums.size();
       int mini=INT_MAX;
       int diff=0;
       sort(nums.begin(), nums.end());
       for(int i=0;i<n-1;i++)
       {
        diff=nums[i+1]-nums[i];
        mini=min(mini, diff);
       }
       return mini;
    }
};