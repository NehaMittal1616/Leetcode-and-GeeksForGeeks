class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<int>st(jewels.begin(),jewels.end());
        int count=0;
        for(char ch:stones)
        {
            if(st.find(ch)!=st.end())
            {
                count++;
            }
        }
        return count;
    }
};