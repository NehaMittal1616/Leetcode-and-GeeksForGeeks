#include<bits/stdc++.h>
using namespace std;
// LEARNED ABOUT int smallest=*st.begin(), int largest= *st.end() , st.erase(smallest), st.erase(largest) 
class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
     int n=nums.size();
     set<int>st;
        for(int j=0;j<n;j++)
        {
            if(nums[j]==key)
            {
                for(int i=0;i<n;i++)
                {
                    if(abs(i-j)<=k)
                    {
                        st.insert(i);
                    }
                }
            }
        }
        // in set we do not have top or pop functions instead we have *st.begin() and *st.rbegin() functions
        // they give us the smallest and the largest element present in the set then we have to erase them from the set by using st.erase(smallest) function!!

     vector<int>ans;
     while(!st.empty())
     {
        int smallest=*st.begin();
        ans.push_back(smallest);
        st.erase(smallest);
     }
        sort(ans.begin(),ans.end());
        return ans;
    }
};