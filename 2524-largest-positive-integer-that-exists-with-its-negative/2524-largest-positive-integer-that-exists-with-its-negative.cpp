class Solution {
public:
    int findMaxK(vector<int>& nums) {
       set<int>st;
       for(int i=0;i<nums.size();i++)
       {
        st.insert(nums[i]);
       }
  int maxi=-1;
  int n=nums.size();
       for(int i=0;i<n;i++)
       {
         int ele=nums[i];
         if(ele>0 && st.find(-ele)!=st.end() )
         {
            maxi=max(maxi, ele);
         }
       }
       return maxi;
    }
};