class Solution {
public:
// sum of three elements closest to target means that absolute difference between the sum and target should be minimum
// so we take two variables diff and sum 
// diff should be minimized , return sum for which diff is minimum
    int threeSumClosest(vector<int>& nums, int target) {
        int diff=INT_MAX;
        int ans=0;
        int n=nums.size();
        // sort the nums array
        sort(nums.begin(),nums.end()); // tc=> O(NlogN) , sc=> O(logN ) for recursive stack space
        for(int i=0;i<=nums.size()-3;i++)
        {
            int start=i+1;
            int end=n-1;
            while(start<end){
                int sum=nums[i]+nums[start]+nums[end];
                if(sum==target) return sum;
                
                if(diff>abs(sum-target))
                {
                    diff=abs(sum-target);
                    ans=sum;
                }
                if(sum>target)
                {
                    // move the end pointer
                    end--;
                }
                else if(sum<target)
                {
                    // move start pointer
                    start++;
                }
            }
           
        }
         return ans;
    }
};