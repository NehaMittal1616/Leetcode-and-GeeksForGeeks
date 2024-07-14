class Solution {
public:
// using recursion and backtracking
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>result;
        vector<int>current;
        vector<bool>used(n,false);
       backtrack(nums,current,result,used);
       return result;
    }
private: 
void backtrack(vector<int>&nums, vector<int>&current, vector<vector<int>>&result, vector<bool>&used)
{
    if(current.size()==nums.size())
    {
        result.push_back(current);
    }
   for(int i=0;i<nums.size();i++)
   {
    if(used[i]==true) continue;
    else
    {
        used[i]=true;
      current.push_back(nums[i]);
      backtrack(nums, current, result,used);
      // backtracking
      used[i]=false;
      current.pop_back();
    }
   }
}

};