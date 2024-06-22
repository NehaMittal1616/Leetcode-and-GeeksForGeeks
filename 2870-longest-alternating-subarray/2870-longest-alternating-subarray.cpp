class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
       int n=nums.size();
       vector<int>diff(n-1);
       for(int i=0;i<n-1;i++)
       {
         diff[i]=nums[i+1]-nums[i];
         // contains 1 , -1, 1 ,-1, 2,3 means contains the difference of element
       }
       int maxi=0;
       int cnt=0; // contains the count of alternating 1s and -1s
       int i=0;
       for(int i=0;i<n-1;i++)
       {
         if((cnt%2==0 && diff[i]==1) || (cnt%2==1 && diff[i]==-1))
         {
            cnt++;
            maxi=max(maxi,cnt+1);
         }
         else if(diff[i]==1)
         {
            cnt=1;
         }
         else
         {
            cnt=0;
         }
       }
       return maxi>1? maxi:-1;
    }
};