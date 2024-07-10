class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>averages;
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            double  average=(double)(nums[i]+nums[j])/2;
            averages.push_back(average);
            i++;
            j--;
        }
        double mini=DBL_MAX;
        for(double it:averages)
        {
            mini=min(mini, it);
        }
        return mini;

    }
};