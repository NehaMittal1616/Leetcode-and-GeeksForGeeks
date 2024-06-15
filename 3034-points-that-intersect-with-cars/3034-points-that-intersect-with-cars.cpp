class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        set<int>st;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int u=nums[i][0];
            int v=nums[i][1];
            for(int j=u;j<=v;j++)
            {
                st.insert(j);
            }
        }
        return st.size();
    }
};