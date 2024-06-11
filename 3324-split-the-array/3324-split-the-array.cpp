class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int n=nums.size();
       unordered_map<int,int>mp;
       for(int i=0;i<n;i++)
       {
        mp[nums[i]]++;
       }
       // storing each element and its frequency
       // if any elements frequency is greater than 2 means we cant divide or split arrays in accordance with the required conditions
       for(auto it:mp)
       {
        if(it.second>2)
        {
            return false;
        }
       }
       return true;
    }
};