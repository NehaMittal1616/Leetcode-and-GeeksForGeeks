class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        bool ispresent=false;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                ispresent=true;
            }
            // if both halves are identical
            if(nums[low]==nums[mid] && nums[mid]==nums[high])
            {
                ++low;
                --high;
            }
            // either left half is sorted or right half is sorted
           else if(nums[low]<=nums[mid])
            {
            // left part sorted
            if(target>=nums[low] && target<=nums[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
            }
            // right part is sorted
          else if(nums[mid]<=nums[high])
            {
               if(target>=nums[mid] && target<=nums[high])
               {
                low=mid+1;
               }
               else
               {
                high=mid-1;
               }
            }
        }
        return ispresent;
    }
};