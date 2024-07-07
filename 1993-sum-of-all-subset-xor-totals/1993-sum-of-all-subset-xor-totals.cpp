class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int totalsum=0;
        for(int i=0;i<(1<<n);i++)
        {  
            int currentxor=0;
            for(int j=0;j<n;j++)
            {
                if((1<<j) &i)
                {
                    currentxor^=nums[j];
                }
            }
            totalsum+=currentxor;
        }
        return totalsum;
    }
};