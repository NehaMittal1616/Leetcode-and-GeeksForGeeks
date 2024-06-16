class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.size();
        int farthest=0;
        // map to store the frequency of each element 
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[moves[i]]++;
        }

        for(auto it: mp)
        {
            if(mp['R']> mp['L'])
            {
                farthest= abs( mp['R']+mp['_']-mp['L']);
            }
            else
            {
                farthest=abs(mp['R']-mp['L']-mp['_']);
            }
        }
        return farthest;
    }
};