class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        vector<int>seen;
        vector<int>ans;
        int n=nums.size();
        int k=0;

        for(int i=0;i<n;i++)
        {
            if(nums[i]!=-1)
            {
                seen.insert(seen.begin(), nums[i]);
                k=0;
            }
            else
            {
                k++;
                if(k<=seen.size())
                {
                    ans.push_back(seen[k-1]);
                }
                else
                {
                    ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};