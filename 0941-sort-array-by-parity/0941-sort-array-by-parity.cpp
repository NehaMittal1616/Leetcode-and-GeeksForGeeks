class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
     
     int n=nums.size();
     vector<int>ans;
     vector<int>odd;
     for(int i=0;i<n;i++)
     {
        if(nums[i]%2==0)
        {
            ans.push_back(nums[i]);
        }
        else
        {
            odd.push_back(nums[i]);
        }
     }
     for(int i=0;i<odd.size(); i++)
     {
        ans.push_back(odd[i]);
     }


     return ans;   
    }
};