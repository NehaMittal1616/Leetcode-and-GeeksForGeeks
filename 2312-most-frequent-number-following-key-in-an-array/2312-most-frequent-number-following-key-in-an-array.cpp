class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==key)
            {
              mp[nums[i+1]]++;
            }
        }
        int maxi=0;
        int ans=0;
        for(auto it:mp)
        {
           if(it.second> maxi)
           {
            maxi=it.second;
            ans=it.first;
           }

        }
        return ans;
    }
};