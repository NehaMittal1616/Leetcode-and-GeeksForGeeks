class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>ans(n);
        
        for(auto it:bookings)
        {
            int first=it[0]-1;
            int last=it[1]-1;
            int seats=it[2];
            for(int i=first;i<=last;i++)
            {
                ans[i]+=seats;
            }
        }
return ans;
    }
};