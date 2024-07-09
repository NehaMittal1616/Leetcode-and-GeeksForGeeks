class Solution {
public:
    int findContentChildren(vector<int>& greed, vector<int>& s) {
    sort(greed.rbegin(), greed.rend());
    sort(s.rbegin(),s.rend());
    int n=greed.size();
    int m=s.size();
    int curr=0;
    int total=0;
    for(int i=0; i<n;i++)
    {
        if(curr<m && s[curr]>=greed[i])
        {
            curr++;
            total++;
        }
    }
    return total;
}
};