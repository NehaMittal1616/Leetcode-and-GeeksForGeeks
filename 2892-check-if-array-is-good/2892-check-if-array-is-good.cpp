class Solution {
public:
// get the maximum element present in the array 
// find the frequency of maximum element 
// maximum element should be present twice
// rest all the elements should be present only once

    bool isGood(vector<int>& nums) {
       int n=nums.size();
       int maxi=0;
       for(int i=0;i<n;i++)
       {
        maxi=max(maxi,nums[i]);
       } 
       if(n!=maxi+1)
       {
        return false;
       }

       // to count the frequency of each element
      unordered_map<int,int>mp;
      for(int i=0;i<n;i++)
      {
        mp[nums[i]]++;
      }


      for(auto it:mp)
      {
        if(it.first!=maxi && it.second!=1 )
        {
            return false;
        }
        else if(it.first==maxi && it.second!=2)
        {
            return false;
        }
      }
      return true;
    }
};