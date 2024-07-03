class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
      int n=nums.size();
      vector<int>sum(n-1);
      int index=0;
      for(int i=0;i<n-1;i++)
      {
          sum[index]=nums[i]+nums[i+1];
          index++;
      }  
      unordered_set<int>st;
      for(int i=0;i<sum.size();i++)
      {
        if(st.find(sum[i])!=st.end())
        {
            return true;

        }
        st.insert(sum[i]);
      }
      return false;
    }
};