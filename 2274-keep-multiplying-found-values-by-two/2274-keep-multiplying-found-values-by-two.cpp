class Solution {
public:

  
    int findFinalValue(vector<int>& nums, int original) {
           // using set data structure to check for the exixtence of original in the nums array
           set<int>st;
           for(int i=0;i<nums.size();i++)
           {
            st.insert(nums[i]);
           }
           
       while(st.find(original)!=st.end())
       {
        original*=2;
       }
       return original;
           

    }
};