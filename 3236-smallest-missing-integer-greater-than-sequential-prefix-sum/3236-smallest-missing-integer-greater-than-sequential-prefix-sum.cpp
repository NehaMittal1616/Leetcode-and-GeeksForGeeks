class Solution {
public:
    int missingInteger(vector<int>& nums) {
      int n=nums.size();
      int maxi=nums[0];
      int maxsum=nums[0];
      int i=1;
      while(i<n && nums[i]==nums[i-1]+1)
      {
        maxi+=nums[i];
        maxsum=maxi;
        i++;
      }
      // maxsum denotes the sum of the longest sequential prefix

    unordered_set<int>st(nums.begin(),nums.end());
    while(st.find(maxsum)!=st.end())
    {
        maxsum++;
    }
      return maxsum;
    }
};