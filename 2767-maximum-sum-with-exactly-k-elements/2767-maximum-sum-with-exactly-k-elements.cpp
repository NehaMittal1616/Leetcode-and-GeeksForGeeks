class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        // get the maximum element from the array
        int maxi=INT_MIN;
        for(int i=0;i<nums.size(); i++)
        {
            maxi=max(maxi,nums[i]);
        }
        int score=0;
        while(k>0)
        {
            score+=maxi;
            maxi++;
            k--;
        }
        return score;
    }
};