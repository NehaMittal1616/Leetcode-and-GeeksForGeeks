class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
       unordered_map<int,int>mp;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
        mp[nums[i]]++;
       } 
       int maxfreq=INT_MIN;
       int cnt=0;
       for(auto it:mp)
       {
          maxfreq=max(maxfreq, it.second);
       }
       for(auto it:mp)
       {
        if(it.second==maxfreq)
        {
            cnt++;
        }
       }
       return cnt*maxfreq;
    }
};