class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp1;
        for(char ch:ransomNote)
        {
            mp1[ch]++;
        }
        unordered_map<char,int>mp2;
        for(char ch:magazine)
        {
            mp2[ch]++;
        }
        bool cancons=true;
        for(auto it:mp1)
        {
            if(mp2[it.first]<it.second || mp2[it.first]==0)
            {
                cancons=false;
            }
        }
        return cancons;
    }
};