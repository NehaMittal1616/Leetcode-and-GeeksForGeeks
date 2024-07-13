class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        // int n=nums.size();
        // for(int i=0;i<n-1;i++)
        // {
        //     int sum=nums[i];
        //     for(int j=i+1;j<n;j++)
        //     {
        //      sum=sum+nums[j];
        //      if(sum%k==0)
        //      {
        //         return true;
        //      }
        //     }
        // }
        // return false;
  
  // BRUTE FORCE -> TC=0(N^2)
 

 // OPTIMAL APPROACH-> 

 unordered_map<int,int>mp;
 mp[0]=-1;
 // map-> {remainder, index}
 int sum=0;
 for(int i=0;i<nums.size();i++)
 {
     sum +=nums[i];
    int remainder=sum%k;
    if(mp.find(remainder)==mp.end())
    {
        mp[remainder]=i;
    }   
    else if(mp.find(remainder)!=mp.end())
    {
        if(i-mp[remainder]>=2)
        {
            return true;
        }
    }
 }
return false;

    }
};