class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size(); 
        
        // we have to check if we can divide nums into n/2 pairs
       // pairs means two elements -> count of each element should be even 
       unordered_map<int,int>mp;
       for(int i=0;i<n;i++)
       {
        mp[nums[i]]++; // stores each element with its count
       }
       for(auto it:mp)
       {
        if(it.second%2!=0) return false;
       }
       return true;
    }
};