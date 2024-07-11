#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int n=grid.size(); // number of rows
        int m=grid[0].size();// number of columns 
        vector<int>ans(m);
        for(int i=0;i<m;i++)
        {
            int maxlength=0;
            for(int j=0;j<n;j++)
            {
                 int ele=abs(grid[j][i]);
                 string str=to_string(ele);
                 int length=str.length();
                 if(grid[j][i]<0)
                 {
                    length+=1;
                 }
                 maxlength=max(maxlength,length);
            }
            ans[i]=maxlength;
        }
        return ans;   
    }
};