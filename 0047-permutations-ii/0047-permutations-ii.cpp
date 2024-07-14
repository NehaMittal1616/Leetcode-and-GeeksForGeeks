class Solution {
public:
// PERMUTATION WITH DUPLICATES
// unique permutations
// in this we just have to sort the nums aaray and do some modifications in the backtrack function
// if we are on one element and its same as the previous one and previous one is not used and continue 

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
      vector<vector<int>>result;
      vector<int>ans;  // SC=> O(N)
      sort(nums.begin(),nums.end()); // O(NlogN)
      vector<bool>used(n,false);
      backtrack(nums,result, ans,used);
      return result;
    }
    private: 
    void backtrack(vector<int>&nums, vector<vector<int>>&result, vector<int>&ans, vector<bool>&used)
    {
        if(ans.size()==nums.size())
        {
            result.push_back(ans);
            return ;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(used[i] || (i>0 && nums[i]==nums[i-1] && !used[i-1]))
            {
                continue;
            }
            else
            {
            ans.push_back(nums[i]);
            used[i]=true;
            backtrack(nums,result,ans, used);
            //backtracking
            used[i]=false;
            ans.pop_back();
            }
           
        }
    }

};