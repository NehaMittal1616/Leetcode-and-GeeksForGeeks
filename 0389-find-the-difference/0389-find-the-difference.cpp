class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
       for(char ch:s)
       {
        mp[ch]++;
       }
       unordered_map<char,int>mp1;
       for(char ch:t)
       {
        mp1[ch]++;
       }

       for(char ch:t)
       {
        if(mp.find(ch)==mp.end())
        {
            return ch;
        }
        else
        {
         if(mp1[ch]-mp[ch]==1)
         {
            return ch;
         }
        }
       }
       
        return ' ';
        
    }
};